//Leetcode

/*
Approach -> O(n) and O(1):

1. Just traverse and compare and if its max update it.
*/

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int zeros=0;
        int max=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                zeros++;
                if(max<zeros)
                {
                    max = zeros;
                }
            }
            else{
                zeros =0;
            }
        }
        return max;
    }
};