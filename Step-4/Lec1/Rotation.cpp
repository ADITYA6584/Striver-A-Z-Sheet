//This is a question of Coding Ninjas

/*
In this question we are req to find the number of times the array is rotated in a array.
Logic:
Just try to find the index of the pivot element 
Return its value and that is the answer.
*/

//Easy Qeustion

int findKRotation(vector<int> &arr)
{
    int start =0;
    int end = arr.size()-1;
    int mid = start +(end-start)/2;
    while(start<=end)
    {
        if(arr[start]<arr[end])
        {
            return 0;
        }
        if(arr[mid]>arr[mid+1])
		{
			return mid+1;
		}
        else if(arr[mid]>arr[0])
        {
            start = mid+1;
        }
        else
        {
            end = mid;
        }
        mid = start+(end-start)/2;
    }
    return -1;
}