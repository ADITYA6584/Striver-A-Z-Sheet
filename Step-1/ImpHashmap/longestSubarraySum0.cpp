//It is a important question:
/*
Can be solved using two ways:
1. Using Three pointers
2. Using HashMap
*/

//GeeksForGeeks Question

//Using HashMap
int maxLen(vector<int>& arr, int n) {
        // Your code here
        unordered_map <int,int> mp;
        mp[0] = -1; //Default value
        int ans=0;
        int sum =0;
        for(int i=0;i<n;i++)
        {
            sum = sum+arr[i];
            if(mp.find(sum) !=mp.end())
            {
                ans = max(ans,i - mp[sum]);
            }
            else
            {
                mp[sum] = i;
            }
        }
        return ans;
    }