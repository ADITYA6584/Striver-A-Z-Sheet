//THis is a Leetcode problem it seems easy but its a little logical and tricky problem

/*
Approach
1. Create a set and copy the element.
2. Now create one more vector and sort it.
3. Now using the same new vector iterate a use the hashmap to map it with the rank/Index.
4. Now just iterate through the vector old one and push element vlaue and then erase the original size of element from the starting of the vector.
5. Return the old vector.
*/

//Time Complexity --> O(NlogN) 
//Space Complexity --> O(N)

class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) 
    {
        //Steps-->1
        int original = arr.size();
        vector <int> v;
        //Most important step for duplicate element
        unordered_set <int> st;
        for(int i=0;i<original;i++)
        {
            st.insert(arr[i]);
        }
        //Now put the unique element in new vector:
        for (auto it = st.begin(); it != st.end(); ++it) 
        {
            v.push_back(*it);
        }
        sort(v.begin(),v.end());    //Sorting clone
        //Hashmap
        unordered_map <int , int> mp;
        for(int i=0;i<st.size();i++)
        {
            mp[v[i]] = i;
        }
    
        for(int i=0;i<original;i++)
        {
            int rank =mp[arr[i]];
            arr.push_back(rank+1);
        }
        arr.erase(arr.begin(),arr.begin()+original);
        
        return arr;
    }
};