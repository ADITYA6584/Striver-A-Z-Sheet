//Leetcode question

/*
In this question we are required to find the single element present in a array
Given that the array contain all the element in pair and only one element is unique.
*/

//Given need to solve using Binary Search


//Approach->1 Time Complexity -> O(n)
class Solution 
{
public:
    int singleNonDuplicate(vector<int>& nums) 
    {
        if (nums.size()==1)
        {
            return nums[0];
        }
        for(int i=1;i<nums.size()-1;i++)
        {
            if(nums[i]!=nums[i+1] && nums[i-1]!=nums[i])
            {
                return nums[i];
            }
        }
        return -1;
    }
};


//Appraoch ->2 Using Binary SearchO (logN)

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) 
    {
        int start =0;
        int end = nums.size()-1;
        int mid = start +(end-start)/2;
        //Only one element is present in array
        if(nums.size()==1)
        {
            return nums[0];
        }
        //Starting
        if(nums[0]!=nums[1])
        {
            return nums[0];
        }
        //End Case
        if(nums[nums.size()-1]!=nums[nums.size()-2])
        {
            return nums[nums.size()-1];
        }
        //Now start will be 1 and end will be end-1;
        start =1;
        end = nums.size()-2;
        while(start<=end)
        {   
            //If element found in mid
            if(nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1])
            {
                return nums[mid];
            }
            if(mid%2==0 && nums[mid]==nums[mid+1] || mid%2==1 && nums[mid-1]==nums[mid])  //eliminate left
            {
                start = mid+1;
            }
            else 
            {
                end = mid-1;            //Eliminate right
            }
            mid = start +(end-start)/2;
        }
        return -1;   
    }
};