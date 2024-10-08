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

//Optimal Approach O(logN)
//Approach -> 2  Using Binary Search

//Key Point is -> Carefully handle edge cases like the starting and the end
class Solution {
public:
    int findPeakElement(vector<int>& nums) 
    {
        //edgecase
        if(nums.size()==1) return 0;
        //For starting edgeCase
        if(nums[0]>nums[1]) return 0;
        //For end case 
        else if(nums[nums.size()-1]>nums[nums.size()-2]) return nums.size()-1;
        int s=1;
        int e = nums.size()-2;
        int mid = s+(e-s)/2;
        while(s<=e)
        {
            if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1] )
            {
                return mid;
            }
            if(nums[mid]>nums[mid-1] && nums[mid]<nums[mid+1])
            {
                s = mid+1;
            }
            else
            {
                e = mid-1;
            }
            mid = s+(e-s)/2;
        }
        return nums.size()-2;
    }
};