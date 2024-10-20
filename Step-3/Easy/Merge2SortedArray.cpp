//Coding Ninjas question
//This is basically merging two sorted array

/*
Approach->1
1. Insert in set
2. Then insert in vector using two pointers.
*/

#include <set>
vector < int > sortedArray(vector < int > a, vector < int > b) {
    int i=0;
    int j=0;
    vector <int> ans;
    set <int> st;
    while(i<a.size() && j<b.size())
    {
        if(a[i]<=b[j])
        {
            st.insert(a[i]);
            i++;
        }
        else 
        {
            st.insert(b[j]);
            j++;
        }
    }
    //If any element is left
    while(i<a.size())
    {
        st.insert(a[i]);
        i++;
    }
    while(j<b.size())
    {
        st.insert(b[j]);
        j++;
    }
    int x=0;
    for(auto it:st)
    {
        ans.push_back(it);
    }
    return ans;
}