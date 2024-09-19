#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
/*
Approach -> 1
Optimal Solution
Time Complexity -> O(N) and Space Complexity -> O(1)
*/


//Approach ->2  My own approach
/*
Time complexity -> O(nlogn) and Space Complexity -> O(N)
Not a optimize solution
*/

class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        //Hash array
        int n = nums.size();
        vector <int> ans;
        int count =1;
        int i = 0;
        //Case when array is empty
        if(n==0)
        {
            return 0;
        }
        while(i+1<n)
        {
            int temp = nums[i];
            if(nums[i]==nums[i+1])
            {
                i++;
            }
            else if(nums[i+1]==temp+1)
            {
                count++;
                i++;
            }
            else
            {
                ans.push_back(count);
                count =1;
                i++;
            }
        }
        ans.push_back(count);
        auto final = max_element(ans.begin(),ans.end());
        //Create a pointer
        int p = *final;
    return p;
    }
};