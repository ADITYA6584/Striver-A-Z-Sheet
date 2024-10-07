//Leetcode question

/*
In this question we are asked to find the peak element in a array.
If no array is in the assecending order then return the last element.
Solve using the Binary Search
*/

//Native Approach
/*
Just iterating in a array and storing the index if the element is larger than the next element
Else break and return the Index value.
*/
class Solution {
public:
    int findPeakElement(vector<int>& nums) 
    {
        int min = INT_MIN;
        int ans=0;
        for(int i =0;i<nums.size();i++)
        {
            if(nums[i]>min)
            {
                min = nums[i];
                ans = i;
            }
            else if(nums[i]<min)
            {
                break;
            }
        }
        return ans;
    }
};

/***********************************************************************************************************/

//Approach -> 2  Using Binary Search
