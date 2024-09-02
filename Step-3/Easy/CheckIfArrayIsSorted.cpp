//Leetcode

// Only check the three cases and u r set to go 

#include <iostream>
#include <vector>
using namespace std;

    bool check(vector<int>& num) {
        int count = 0;
        int i =1;
        for (int i = 1; i < num.size(); i++) {
            if (num[i - 1] > num[i]) {
                count++;
            }
        }
            if (num[num.size()-1] > num[0]) 
                {
                    count++;
                }
        cout<<count<<endl;
        if (count<2) {
            return true;
        }
    return false;   