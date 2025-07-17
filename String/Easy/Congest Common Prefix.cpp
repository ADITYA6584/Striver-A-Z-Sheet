/*
    Main Logic is that :
    First Sort the array.
    Then Have two pointer one in the starting and in the last element.
*/

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        /*
        Main Logic is that :
        First Sort the array.
        Then Have two pointer one in the starting and in the last element.
        */
        string ans;
        int last = strs.size();
        sort(strs.begin(), strs.end());
        string firstele = strs[0];
        string secondele = strs[last - 1];
        int minimum = min(size(firstele), size(secondele));
        for (int i = 0; i < minimum; i++)
        {
            // ending case
            if (firstele[i] != secondele[i])
            {
                break;
            }
            else if (firstele[i] == secondele[i])
            {
                ans += firstele[i];
            }
        }
        return ans;
    }
};