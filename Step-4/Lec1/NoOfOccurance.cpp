
// This is coding ninjas question
// Take the reference from First and Last occurance question
//THis question is required to be solved in O(Logn)
/*
Using simple binary search to find the first and the last occurance in array 
Then subtracting and adding 1 if found
*/

int First(vector <int> arr,int n,int x)
{
	int low=0;
	int high = n-1;
	int mid =low -(low-high)/2;
	int ans =-1;
	while(low<=high)
	{
		if(arr[mid]==x)
		{
			ans = mid;
			high = mid-1;
		}
		else if(arr[mid]<x)
		{
			low = mid+1;
		}
		else
		{
			high = mid-1;
		}
		mid =low -(low-high)/2;
	}
	return ans;
}
//Last
int Last(vector <int> arr,int n,int x)
{
	int low=0;
	int high = n-1;
	int mid =low -(low-high)/2;
	int ans =-1;
	while(low<=high)
	{
		if(arr[mid]==x)
		{
			ans = mid;
			low = mid+1;
		}
		else if(arr[mid]<x)
		{
			low = mid+1;
		}
		else
		{
			high = mid-1;
		}
		mid =low -(low-high)/2;
	}
	return ans;
}
int count(vector<int>& arr, int n, int x) {
	// Write Your Code Here
	int a = First(arr,n, x);
	int b = Last(arr,n, x);
	int finals;
	if(a==-1)
	{
		finals = 0;
	}
	else
	{
		finals = b-a+1;
	}
	return finals;
}
