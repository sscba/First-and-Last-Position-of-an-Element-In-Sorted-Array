You have been given a sorted array/list ARR consisting of ‘N’ elements. You are also given an integer ‘K’.
Now, your task is to find the first and last occurrence of ‘K’ in ARR.
https://www.codingninjas.com/codestudio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2


// int firstOcc(vector<int> arr,int n, int key){
//     int s=0, e=n-1;
//     int ans = -1;
//     int mid = s + (e-s)/2;

//     while(s<=e){
//         if(key==arr[mid]){
//             ans=mid;
//             e= mid -1;
//         }

//         else if(key>arr[mid]){
//             s= mid + 1;
//         }

//         else if(key<arr[mid]){
//             e= mid -1;
//         }
//         mid= s + (e-s)/2;
//     }
//     return ans;
// }

// int lastOcc(vector<int> arr,int n,int key){
//     int s=0, e=n-1, ans=-1;
//     int mid= s + (e-s)/2;

//     while(s<=e){
//         if(arr[mid]==key){
//             ans=mid;
//             s= mid +1;
//         }
//         else if(key>arr[mid]){
//             s= mid + 1;
//         }
//         else if(key<arr[mid]){
//             e= mid -1;
//         }
//         mid= s + (e-s)/2;
//     }
//     return ans;
// }
int firstOcc(vector<int> arr,int n,int k)
{
	int s=0,e=n-1, ans=-1;
	while(s<=e)
	{
		int mid= s+ (e-s)/2;
		
		if(arr[mid]==k)
		{
			ans=mid;
			e= mid-1;
		}
		else if(k>arr[mid])
		{
			s=mid+1;
		}
		else
			e=mid-1;
	}
	return ans;
}

int lastOcc(vector<int> arr,int n,int k)
{
	int s=0,e=n-1, ans=-1;
	while(s<=e)
	{
		int mid= s+ (e-s)/2;
		if(arr[mid]==k)
		{
			ans=mid;
			s=mid+1;
		}
		else if(k>arr[mid])
			s=mid +1;
		else
			e=mid-1;
	}
	return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int,int> p;
	p.first= firstOcc(arr, n, k);
	p.second= lastOcc(arr, n, k);
	
	return p;
}
