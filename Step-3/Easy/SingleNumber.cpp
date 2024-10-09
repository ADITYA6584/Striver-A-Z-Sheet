//Leetcode Question
//Required to solve using O(n) and O(n)
/*
This question can be solved using three method
1. Using two pointer.
2. Using hashmap or can use hash array.
3. Using single loop.  ---> Optimal Solution or use XOR solution.
*/

//Using XOR -->Optimal solution
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //Using XOR
        int XOR =0;
        for(int i=0;i<nums.size();i++)
        {
            XOR = XOR^nums[i];
        }
        return XOR;
    }
};


//Using single loop  ---> Optimal solution
class Solution {
public:
     int singleNumber(vector<int>& nums) {
        int ele=0;
        int i=0;
            for (int j=i+1;j<nums.size();j++)
            {
                if(nums[i]==nums[j])
                {
                    nums.erase(nums.begin()+j);
                    nums.erase(nums.begin()+i);
                    i=0; 
                    j=i;
                }
            }
            ele=nums[0];
        return ele;
    }
};