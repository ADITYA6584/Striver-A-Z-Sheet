//Leetcode
/*
->This can be solved in many ways using:
Two pointer
Using Array
*/

//Code

/*
-> In this i will be going to use Array method: Using header file 


1. Use the Inbuit function "StreamString s(string name)" to seperate the words.
2. Now store in the array.
3. Now iterate over the array from end and psuh in string answer.
4. Return the answer.
*/
#include <sstream>

class Solution {
public:
    string reverseWords(string str) {
        //New library used for seprating the words
        stringstream s(str);
        string word;

        // To store words.
        vector<string>temp;

        // To store the ans.
        string ans="";

        while(s>>word)
        {
            temp.push_back(word);
        }
        
        //Reversing the words and storing it to the ans string
        for(int i=temp.size()-1;i>=0;i--){
            if(i!=0)
            ans+=temp[i]+" ";
            else
            ans+=temp[i];
        }
        return ans;
    }
};