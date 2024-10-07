//Leetcode and as well as Coding Ninjas Question

/*
This is a question to find the minimum in a array or pivot element in an array.
*/

/*
Approach:

1. Initialize `start` and `end`: Set `start` to the beginning (0) and `end` to the last index (size of the array - 1).
2. Check if Array is Sorted: If `arr[start] < arr[end]`, the array is already sorted, so return `arr[start]` (the minimum element).
3. Binary Search Loop:
   - Calculate `mid` as `start + (end - start) / 2`.
   - If `arr[mid] > arr[mid + 1]`, return `arr[mid + 1]` (the pivot element).
   - If `arr[mid] >= arr[start]`, move `start` to `mid + 1` (search in the right half).
   - Otherwise, set `end` to `mid` (search in the left half).
4. Return Minimum: Once the loop ends, return `arr[start]` (the minimum element).
*/
int findMin(vector<int>& arr)
{
	int s=0;
	int e = arr.size()-1;
	int mid = s+(e-s)/2;
	while(s<e)
	{
        if(arr[s]<arr[e])
        {
            return arr[0];      //Already sorted
        }
		if(arr[mid]>arr[mid+1])
		{
			return arr[mid+1];
		}
		else if(arr[mid]>arr[s])
		{
			s = mid+1;
		}
		else
		{
			e = mid;
		}
		mid = s+(e-s)/2;
	}
	return arr[0];
}