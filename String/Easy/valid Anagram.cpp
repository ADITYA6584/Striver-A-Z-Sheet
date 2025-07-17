//This is a easy level problem on LeetCode.


class Solution {
public:
    bool isAnagram(string s, string t) {
        //base case
        if(s.length() != t.length()){
            return false;
        }
        else{
            //Now using hashmap
            unordered_map<char, int> count;
            
            for(int i=0;i<s.length();i++){
                count[s[i]]++;
            }

            //check
            for(int i=0;i<t.length();i++){
                //if not exit
                if(count.find(t[i])==count.end() || count[t[i]]==0){
                    return false;
                }
                count[t[i]]--;
            }
            return true;
        }
    }
};