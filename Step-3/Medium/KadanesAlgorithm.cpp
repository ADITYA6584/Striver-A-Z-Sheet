//Leetcode subarray question that uses Kadane's algorithm to find the maximum sum of a contiguous subarray.
//Leetcode 53 using Kadane's algorithm

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //Max
        int maxSum = INT_MIN;
        //sum 
        int sum = 0;
        for(int i=0;i<nums.size();i++)
        {
            sum = sum + nums[i];
            if(sum>maxSum)
            {
                maxSum = sum;
            }
            if(sum<0)       //If sum is negative then sum =0
            {
                sum =0;
            }
        }
        //Test case when all the numbers are negative then return -1
        return maxSum;
    }
};
