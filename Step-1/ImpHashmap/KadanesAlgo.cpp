//There are three ways to solve this question 
        //O(N3) , O(N2) , O(N)-> Kadanes  Alogrithm


        //Kadanes Algo
        //Optimal Approach
        //Approach ->3   --->O(N) Kadanes Algorithm
        class Solution {
        public:
        int maxSubArray(vector<int>& nums) {
        //Max
        int maxSum = INT_MIN;
        //sum 
        int sum = 0;
        for(int i=0;i<nums.size();i++)
        {
            sum = sum + nums[i];
            if(sum>maxSum)
            {
                maxSum = sum;
            }
            if(sum<0)       //If sum is negative then sum =0
            {
                sum =0;
            }
        }

        //Test case when all the numbers are negative then return -1
        
        return maxSum;
    }
}; 

        //Approach ->1   ---> TLE ----> O(N3)
        int max = INT_MIN;
        vector <int> check;
        for (int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums.size();j++)
            {
                int sum=0;
                for (int k=i;k<=j;k++)
                {
                    
                    sum = sum+nums[k];
                    if(sum>=max)
                    {
                        max = sum;
                        check.push_back(max);
                    }
                }
            }
        }
        for(int &ele: check)
        {
            cout<<ele<<" ";
        }
        return max;
    }

    //Approach ->2   ---> TLE ----> O(N2)
    class Solution {
    public:
    int maxSubArray(vector<int>& nums) 
    {
        int max = INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            int sum =0;
            for(int j=i;j<nums.size();j++)
            {
                sum = sum+nums[j];
                if(sum>max)
                {
                    max = sum;
                }
            }
        }
        return max;
    }
};

