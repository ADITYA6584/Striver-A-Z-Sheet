//This is a most asked question in intervied
//Required to solve in Binary Search

/*
//Best Approach
Approach -> 1 Time Complexity is O(logN)
1. find the pivot vlaue in a array i.e arr[mid]>=arr[0];
2. Then apply the binary search in two half.
3. Return the ans if found and if not return -1

*/

class Solution {
    int pivot(vector <int> num)
{
   int start =0;
   int end = num.size()-1;
   int mid = start +(end-start)/2;
   while(start<end)
   {
    if(num[mid]>=num[0])
    {
        start=mid+1;
    }
    else
    {
        end = mid;
    }
    mid = start +(end-start)/2;
   } 
   return end;
}
int binarySearch(int s,int e,int target,vector <int> nums)
{
   int mid = s +(e-s)/2;
   int ans =-1;
   while (s<=e)
   {
    if(nums[mid] ==target)
    {
        int ans = mid;
        return ans;
    }
    else if(nums[mid]<target)
    {
        s = mid+1;
    }
    else if(nums[mid]>target)
    {
        e = mid-1;
    }
    mid = s +(e-s)/2;
   }
   return ans;
}
public:
    int search(vector<int>& nums, int target) {
    int check = pivot(nums);
    int p = nums.size()-1;
    if(target>=nums[check] && target <=nums[p])
    {
        int ans = binarySearch(check,p,target,nums);
        return ans;
    }
    else
    {
        int ans2 = binarySearch(0,check-1,target,nums);
        return ans2;
    }
    return 0;
    }
};