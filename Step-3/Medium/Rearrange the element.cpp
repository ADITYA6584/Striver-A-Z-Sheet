//Leetcode question
// Leetcode 2149

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>v1,v2,ans;
        //Creating a two new array for positive and negative element
        for(int i =0;i<nums.size();i++){
            if(nums[i]>0){
            v1.push_back(nums[i]);
            }
            else v2.push_back(nums[i]);
        }

        int ind1=0,ind2=0;
        // insert in the same order
        while(ind2<nums.size()/2){
            ans.push_back(v1[ind1]);
            ind1++;
            ans.push_back(v2[ind2]);
            ind2++;
        }
        return ans;
    }
};


