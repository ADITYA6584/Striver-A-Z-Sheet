//Leetcode Question

/*
Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]
*/

class Solution {
public:
    void reverse (vector<int>& nums , int start , int end)
    {
        while(start<end)
        {
            swap(nums[start],nums[end]);
            start++; 
            end--;
        }
    }

    void rotate(vector<int>& nums, int k) 
    {
        int size = nums.size();
        k = k%size;
        reverse(nums,size-k,size-1);
        reverse(nums,0,size-k-1);
        reverse(nums,0,size-1);
    }
};