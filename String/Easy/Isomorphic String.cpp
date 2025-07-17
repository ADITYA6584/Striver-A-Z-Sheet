
//My logic 
/*
But not optimized
1. Create a mapping from characters in s to characters in t.
2. Check if the mapping is consistent for both strings.

*/

class Solution {
public:
    bool isIsomorphic2(string s, string t) {
        // same length is given
        unordered_map<char, char> mapping;
        bool check = true;
        for (int i = 0; i < s.length(); i++) {
            // if doesn't mapped
            if (mapping.find(s[i]) == mapping.end()) {
                mapping[s[i]] = t[i];
            }
            // if exist
            else {
                if (mapping[s[i]] != t[i]) {
                    return false;
                }
            }
        }
        return true;
    }

public:
    bool isIsomorphic(string s, string t) {
        bool check = true;
        // same length is given
        unordered_map<char, char> mapping;

        for (int i = 0; i < s.length(); i++) {
            // if doesn't mapped
            if (mapping.find(s[i]) == mapping.end()) {
                mapping[s[i]] = t[i];
            } 
            else {
                if (mapping[s[i]] != t[i]) {
                    check = false;
                    break;
                }
            }
        }
        bool check1 = check;
        bool check2 = isIsomorphic2(t, s);
        if (check1 == true && check2 == true) {
            return true;
        }
        return false;
    }
};


//Optimized code
class Solution {
public:
    // Check if s can be mapped to t
    bool isIsomorphicOneWay(string s, string t) {
        unordered_map<char, char> mapping;
        for (int i = 0; i < s.length(); i++) {
            if (mapping.find(s[i]) == mapping.end()) {
                mapping[s[i]] = t[i];
            } else {
                if (mapping[s[i]] != t[i]) {
                    return false;
                }
            }
        }
        return true;
    }
    // Main function
    bool isIsomorphic(string s, string t) {
        // You want to check both directions:
        // 1. s ➝ t
        // 2. t ➝ s
        bool check1 = isIsomorphicOneWay(s, t);
        bool check2 = isIsomorphicOneWay(t, s);
        return check1 && check2;
    }
};
