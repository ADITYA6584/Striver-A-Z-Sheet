//Leetcode Question

/*
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

Approch-->1
Use HashMap:
It will use standard method of hashmap 
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        // vector <int> ans;
        unordered_map <int,int> hash;
        for(int i =0;i<nums.size();i++)
        {
            int remaining = target - nums[i];
            if(hash.find(remaining)!=hash.end())
            {
                // ans.push_back(hash[remaining]);
                // ans.push_back(i);
                return {hash[remaining] , i};
            }
            hash.insert({nums[i] , i});
        }
        return {-1,-1};
    }
};