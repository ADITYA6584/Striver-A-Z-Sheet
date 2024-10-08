//Leetcode

/*
Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
*/

//Best my own solution

class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
       int count =0;
       int index =0;
       while(index<nums.size())
       {
        if(nums[index]==0)
        {
            count++;
            nums.erase(nums.begin()+index);  
        }
        else if(nums[index]!=0)
        {
            index++;
        }
       }
       for(int j=0;j<count;j++)
       {
        nums.push_back(0);
       }
    }
};