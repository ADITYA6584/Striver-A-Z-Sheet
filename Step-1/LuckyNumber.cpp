//Both the solution i did by myself

//Hashmap TC-> Ordered hashmap ---> O(logN)


#include <iostream>
#include <map>
#include <vector>
using namespace std;

class Solution {
public:
    int findLucky(vector<int>& arr) {
        int size = arr.size();
        //Using hashing
        map <int,int> ans;
        for(int i = 0; i<size;i++)
        {
            ans[arr[i]]++;
        }
        //Iterating in map
        int finals;
        bool check = false;
        for(auto it:ans)
        {
            if(it.first ==it.second)
            {
                check =true;
                finals = it.first;
            }
        }

        //Checking 
        if(check ==true)
        {
        return finals;
        }
        return -1;
    }
};
