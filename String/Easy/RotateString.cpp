//This is a basic but Tricky problem on LeetCode.

/*
Main Logic is 
when we add the S+s it will give all the combination of goal
Then if any permutation is there in s then it will return true else false
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    string s, goal;
    cout << "Enter the string s: ";
    cin >> s;
    cout << "Enter the string goal: ";
    cin >> goal;
    //base case
    if(s.length() != goal.length()){
        cout << "The string goal is not a rotation of string s." << endl;
        return false;
    }
    else{
        // Tricky logic 
        string temp = s + s; // Concatenate s with itself
        // Check if goal is a substring of temp
        if(temp.find(goal) == string::npos){
            cout << "The string goal is not a rotation of string s." << endl;
            return false;
        }
        else{
            cout << "The string goal is a rotation of string s." << endl;
            return true;
        }
    }
    return 0;
}


//Solution of leetcode question
class Solution {
public:
    bool rotateString(string s, string goal) {
      //base case
      if(s.length()!=goal.length()){
        return false;
      }  
      else{
        string temp = s+s;
        //if find is equal to not found then 
        if(temp.find(goal)==string::npos){
            return false;
        }
      }
      return true;
    }
};