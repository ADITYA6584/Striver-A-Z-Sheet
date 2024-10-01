//About Leetcode
/*
In this question we just need to find the first and last occurance of the Target.
If not found then return -1 , -1 ;
*/

//Approach -> 1 Not a best Approach   Time Complexity -> O(N)
/*
Iterting over the array
If first found then sort in First
And keep on Updating the Last variable
*/
class 
{
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        int last=-1;
        int first = -1;
        for(int i = 0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                if(first==-1)
                {
                    first = i;
                }
                last = i;
            }
        }
        
        vector <int> finals ;
        finals.push_back(first);
        finals.push_back(last);
        return finals;
    }
};


//Appraoch -> 2 Best Approch        Time Complexity -> O(logN)
/*
Applied binary Search if element found then end = mid-1 --> for first
Else for start = mid + 1 --> for last
*/

class Solution {
    //Function -> 1
    int first(vector<int>& nums, int target) {
        int ans=-1;
        int start = 0;
        int end = nums.size()-1;
        int mid =start -(start-end)/2;
        for(start=0;start<=end;mid =start -(start-end)/2)
        {
            if(nums[mid]==target)
            {
                ans= mid;
                end = mid-1;    //This the key difference between both the function
            }
            else if(nums[mid]>target)
            {
                end = mid-1;
            }
            else if(nums[mid]<target)
            {
                start = mid+1;
            }
        }
        return ans;
    }

    //Function -> 2
    int last(vector<int>& nums, int target) {
        int ans=-1;
        int start = 0;
        int end = nums.size()-1;
        int mid =start -(start-end)/2;
        for(start=0;start<=end;mid =start -(start-end)/2)
        {
            if(nums[mid]==target)
            {
                ans= mid;
                start = mid+1;          //This the key difference between both the function
            }
            else if(nums[mid]>target)
            {
                end = mid-1;
            }
            else if(nums[mid]<target)
            {
                start = mid+1;
            }
        }
        return ans;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector <int> finals ;
        finals.push_back(first(nums,target));
        finals.push_back(last(nums,target));
        return finals;
    }
};