/*
This is one the best and tricky question 
It took me almost 1 day to solve with the help of Youtube
*/

//Dry run through each step and then understand
/*
Approach->1
1. Iterate through the string
2. Check that the char is exit in the hashmap then make left to the right side of the last occurence of that char in hashmap
3. If it doesnt exist then put that char in the hashmap with index.
*/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map <char ,int> mp;
        int left =0;
        int maxi =0;
        for(int i=0;i<s.length();i++)
        {
            //this is where i was making mistake
            if (mp.find(s[i]) != mp.end() && left<=mp[s[i]]) //exist
            {
                left = mp[s[i]] + 1;
                mp[s[i]] = i;   //Update the value
            }
            else
            {
                mp[s[i]] = i;   //else
                maxi = max(maxi, i - left + 1);
            }
        }
        return maxi;
    }
};