//There are three ways to solve this question 
        //O(N3) , O(N2) , O(N)-> Kadanes  Alogrithm

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
    