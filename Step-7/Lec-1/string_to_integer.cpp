//Leetcode Question:
//Very Important question

/*
# Approach

- First create a substring of the string.

- Then check the starting is positive sign or negative and assign value to sign variable.

- Now iterate over the string and if white space or non digit then break.

- Else calculate the number and then return it with multiplication with sign.

*/

//Code

class Solution {
    public :
    int myAtoi(string s) {
        if(s.length()==0) return 0;

        int i=0;
        while(i<s.size() && s[i]== ' ') 
        {
            i++;
        }     
        s = s.substr(i); //i ---> last of string
        
        int sign = +1;
        long ans = 0;
        
        if(s[0] == '-') sign = -1;
        
        int MAX = INT_MAX;
        int MIN = INT_MIN;
        
        if(s[0]=='+') i=1;
        else if (s[0]=='-') i=1;
        else i=0;                   //Because if both the condition fails the i value will be at the end of the string

        while(i < s.length()) 
        {
            if(s[0] == ' ' || !isdigit(s[i])) break;
            
            ans = ans * 10 + s[i]-'0';
            if(sign == -1 && -1*ans < MIN) return MIN;
            if(sign == 1 && 1*ans > MAX) return MAX;
            
            i++;
        }
        
        return (int)(sign*ans);
    }
};