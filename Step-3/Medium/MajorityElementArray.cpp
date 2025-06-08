//Leetcode 169 using Hashmap

class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        //Using hashmap
        unordered_map <int,int> map;
        for(int i=0;i<nums.size();i++)
        {
            map[nums[i]]++;
        }
        int ans;
        for(auto it:map)
        {
            if(it.second>nums.size()/2)
            {
                ans = it.first;
            }
        }
        return ans;
    }
};