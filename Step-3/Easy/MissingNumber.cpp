//Leetcode question

// This problem can be solved by 3 methods:
// 1.Hashing
// 2.Sum Formula

// 3.Bit manupulation i.e using XOR.
// Lets dicuss this method that which is more effiecient and why it has to be used:-

// HASHING :- In this Method, We can iterate over all the element upto the n and compare it with the present element by creating the hash map of (n+1).
// Time Complexity = O(n)
// Space complexity =O(n)
// Issue :- Though it is taking the space complexity of N, So we move on to the next Method.
// Sum Formula :- In this we us e the sum formula i.e;
// Sn = (N+1)/2 & Sum of all the array(Sa[]).
// And after this we subtract the (Sn-Sa[]) to find the Missing Number.
// Time Complexity = O(n)
// Space complexity =O(1)
// Issue :- It can cause the Overflow issue because in this we are adding the element, So if the array element is very large then it can cause Integer Overflow.
// To handle out this Overflow we can use the Next Method which is XOR Bit Manipulation.

// XOR Bit Manipulation :- In this we take the XOR of given array and the first n natural number.
// Time Complexity = O(n)
// Space complexity =O(1)
// No Overflow.
// Hope you find this useful.


/*
Approach -> Using HashArray

*/
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans = -1;
        int total = nums.size();
        vector <int> arr(total+1,0);
        for(int i =0;i<total ; i++)
        {
            arr[nums[i]]++;
        }
        for(int i =0;i<total+1;i++)
        {
            if(arr[i]!=1) return i;
        }
        return ans;
    }
};

// *******************************************************************************

//Approach => Using XOR

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int total = nums.size();
        int xor_result = 0;

        // XOR all indices from 0 to total (i.e., n)
        for (int i = 0; i <= total; i++) {
            xor_result ^= i;
        }

        // XOR all numbers in the nums array
        for (int i = 0; i < total; i++) {
            xor_result ^= nums[i];
        }

        // The result will be the missing number
        return xor_result;
    }
};
