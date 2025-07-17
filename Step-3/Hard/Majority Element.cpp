//This is leetcode question 229

//My soultion is based on simple majority element solution
//Time complexity is O(n)
//Space complexity is O(n) for the unordered_map

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map <int,int> count;
        //check the counting
        for(int i=0;i<nums.size();i++){
            count[nums[i]]++;
        }

        float checking = nums.size()/3;
        vector <int> ans;

        for(int i=0;i<nums.size();i++){
            if(count[nums[i]]>checking){
                ans.push_back(nums[i]);
                //then
                count[nums[i]] =0;
            }
        }
        return ans;
    }
};


//Main problem is to solve this question in O(1) space complexity



