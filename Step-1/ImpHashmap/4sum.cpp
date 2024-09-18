#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;


/*
There are total three approach to solve this qeustion
1. Use of four pointer and iterate it and store ----> O(N4) and Space Complexity ---->O(1)
Extra --> |Use of three pointer and use of sorting as well as Binary Search ----> O(N3logN) and Space Complexity ---->O(1)
2. Use three pointer and store them in Set vector and then store it to vector vector ----> O(N3) and Space Complexity ---->O(N)
3. (Optimal Solution) Use of three pointer and then Directly Store it to vector ----> O(N3) and Space Complexity ---->O(1)
*/

//Code of Approach->2 ----> O(N3) and Space Complexity ---->O(N)
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) 
    {
        set <vector <int>> quart;
        sort(nums.begin(), nums.end());
        vector <vector <int>> ans;
        
        for (int i = 0; i < nums.size(); i++) 
        {
            for (int j = i + 1; j < nums.size(); j++) 
            {
                long long remain = (long long)target - (long long)nums[i] - (long long)nums[j];
                int front = j + 1;
                int end = nums.size() - 1;

                while (front < end) 
                {
                    if ((long long)nums[front]  + (long long)nums[end] < (long long)remain) 
                    {
                        front++;
                    }

                    else if ((long long)nums[front]  + (long long)nums[end] > (long long)remain) 
                    {
                        end--;
                    } 
                    else 
                    {
                        //Inserted data in vector form
                        quart.insert({nums[i],nums[j],nums[front],nums[end]});
                        front++;
                        end--;
                    }
                }
            }
            
        }
        for(auto it: quart)
        {
            ans.push_back(it);
        }
    return ans;
    }
};


//Approach ->3 Best and optimal approach

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> output;
        for(int i=0; i<n-3; i++){
            for(int j=i+1; j<n-2; j++){
                long long remain = (long long)target - (long long)nums[i] - (long long)nums[j];
                int front = j+1, end = n-1;
                while(front < end){
                    if(nums[front] + nums[end] < remain){
                        front++;
                    }
                    else if(nums[front] + nums[end] > remain){
                        end--;
                    }
                    else{
                        output.push_back({nums[i], nums[j], nums[front], nums[end]});

                        //Jump dulipcate values
                        int tempIndex1 = front, tempIndex2 = end;
                        while(front < end && nums[front] == nums[tempIndex1]) front++;
                        while(front < end && nums[end] == nums[tempIndex2]) end--;
                    }
                }
                //Jump dulipcate values
                while(j+1 < n && nums[j] == nums[j+1])
                {
                    j++;
                }
            }
            //Jump dulipcate values
            while(i+1 < n && nums[i] == nums[i+1])
            {
                i++;
            }
        }
        return output;
    }
};