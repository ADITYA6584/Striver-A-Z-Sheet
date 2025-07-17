/*
This is a very easy but tricky problem on LeetCode.

Important Note:
Use of isalnum() function to check the alphanumeric characters
and to convert to lowercase using tolower() function.
*/

class Solution {
public:
    bool isPalindrome(string s) {
       int left = 0;
       int right = s.length()-1; 
       //iterate
       while(left<right){
        if(!isalnum(s[left])){
            left++;
        }
        else if(!isalnum(s[right])){
            right--;
        }
        else if(tolower(s[left]) !=tolower(s[right])){
            return false;
        }
        else{
            left++;
            right--;
        }
       }
       return true;
    }
};