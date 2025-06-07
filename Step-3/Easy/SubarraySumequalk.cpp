//THis is a question from LeetCode
//In this we need to return the number of subarrays that sum to a given value k


//Approach:1 Time complexity O(n^2) and space complexity O(1)
//Giving TLE
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        //Brute force
        long sum =0;
        int count=0;

        for(long i=0;i<nums.size();i++){
            sum =0; //new subarray
            for(long j=i;j<nums.size();j++){
                if(i==j){
                    sum = nums[j];
                    //check
                    if(sum==k){
                        count++;
                    }
                    //this is only when positive 
                    // else if(sum>k){
                    //     break;
                    // }
                }
                else{
                    sum = sum+nums[j];
                    if(sum==k){
                        count++;
                    }
                    //this is only when positive 
                    // else if(sum>k){
                    //     break;
                    // }
                }
            }
        }
        return count;
    }
};


//Little changes
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // Brute force
        long sum = 0;
        int count = 0;

        for (long i = 0; i < nums.size(); i++) {
            sum = 0; // new subarray
            for (long j = i; j < nums.size(); j++) {
                sum = sum + nums[j];
                if (sum == k) {
                    count++;
                }
            }
            
        }
        return count;
        }
    };


// Approach:2 Time complexity O(n) and space complexity O(n)
//Understand this by chatgpt

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        //Optimal approach
        long sum =0;
        int count =0;
        unordered_map <int,int> s;
        for(long i=0;i<nums.size();i++){
            sum += nums[i];
            if(sum==k) count++;
            //insert in map
            //if it already exit then increase the count 
            if(s.find(sum-k)!=s.end()){
                count += s[sum-k];
            } 
            //update the map
            s[sum]++;
        }
        return count;
    }
};