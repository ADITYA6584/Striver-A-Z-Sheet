//Leetcode question 
// Dutch National flag algorithm. 
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int s = nums.size();
        for (int i = 0; i <= nums.size() - 2; i++) {
            if (s < 2) {
                break;
            } 
            else {
                for (int j = 0; j < nums.size() - 1 - i; j++) {
                    if (nums[j] > nums[j + 1]) {
                        swap(nums[j], nums[j + 1]);
                    }
                }
            }
        }
    }
};