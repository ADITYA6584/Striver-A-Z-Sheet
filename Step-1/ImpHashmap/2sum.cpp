/*
Best optimal solution : O(n)
By using Hashmap:
*/
//Did by myself

//Steps are:
/*
1.First interate in vector  and check if it exit in the hash or not
2.If yes then store it in new vector else
3.Store that value in hashmap
*/

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector <int> ans;
        unordered_map <int,int> hash;
        for(int i =0;i<nums.size();i++)
        {
            int remaining = target - nums[i];
            if(hash.find(remaining)!=hash.end())
            {
                ans.push_back(hash[remaining]);
                ans.push_back(i);
                return ans;
            }
            hash.insert({nums[i] , i});
        }
        return ans;
    }

int main()
{
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 7;
    vector <int> ans = twoSum(arr,target);

    for(int &ele:ans)
    {
        cout<<ele<<" ";
    }
    return 0;
}