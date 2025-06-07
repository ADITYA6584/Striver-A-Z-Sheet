/*
525 Leetcode Question
WE need to find the maximum length of a contiguous subarray with an equal number of 0s and 1s.
*/

//Approach:1 Time complexity O(n^2) and space complexity O(1)
//Giving TLE
/*
Self Thought Approach:
We can change all the 0s to -1s and then check for the sum of the subarray.
// If the sum is 0, then we have an equal number of 0s and 1s.
*/
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        // changing all the zero with -1;
        for (int& i : nums) {
            if (i == 0) {
                i = -1;
            }
        }

        // Now check for sum =0
        int maxi = 0;
        for (int i = 0; i < nums.size(); i++) {
            int sum = 0;
            for (int j = i; j < nums.size(); j++) {
                sum += nums[j];
                if (sum == 0) {
                    int check = j - i + 1;
                    maxi = max(maxi, check);
                }
            }
        }
        return maxi;
    }
};

//Optimized Approach: Using HashMap
// Time complexity O(n) and space complexity O(n)
/*
Approach:
We can use a HashMap to store the sum of the subarray and its index.
Replace 0s with -1 to convert the problem into finding the longest subarray with sum = 0.
Use a hash map to store the first occurrence of each cumulative sum.
If the same sum appears again, it means the elements between those indices cancel out to 0.
Track the maximum length during iteration.
*/

class Solution {
public:
    int findMaxLength(vector<int>& nums) {

        for(int &i:nums){
            if(i==0){
                i=-1;
            }
        }
        int maxiLength =0;
        int sum = 0;
        unordered_map <int , int> mp;
        //Now the actual logic
        for(int i=0;i<nums.size();i++){
            int currLength =0;
            sum +=nums[i];
            if(sum==0){ 
                maxiLength = i+1;
            }
            //if exist
            else if(mp.find(sum)!=mp.end()){
                maxiLength = max(maxiLength ,i-mp[sum] );
            }
            else{
                mp[sum]=i;
            }
        }
        return maxiLength;
    }
};