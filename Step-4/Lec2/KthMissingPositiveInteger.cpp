//This is a easy question but very tricky as well

//Very Important****************************************************************

/*
Logic: ---> Brute force method 
Time Complexity ---> O(n)
Space Complexity --> O(1)

Just iterate over the array
And increment the value of K if the value is less than the k.
Else if the value is greater than the K return it.
*/

//Code ---> Brute force:
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
    for(int i =0;i<arr.size();i++)
    {
        if(arr[i]<=k)
        {
            k++;
        }
        else
        {
            return k;
        }
    }
    return k;
    }
};

//Code ---> Optimized Code:
/*
Logic: ---> Brute force method 
Time Complexity ---> O(nlog(n))
Space Complexity --> O(1)
Approach ---> Binary Search


*/

//My own solution it has very high time complexity
//Time Complexity is around --> maxi*n and maxi => 10power7
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) 
    {
        //New array
        vector <int> missing;
        int maxi = *max_element(arr.begin(),arr.end());
        //entre value in vector
        for(int i=0;i<10000000;i++)
        {
            int num = i+1;
            missing.push_back(num);
        }
        //check 
        for(int i=0;i<arr.size();i++)
        {
            auto it = find(missing.begin(),missing.end(),arr[i]);
            // Checking if element is found or not
            if (it != missing.end())
            {
            int index = it - missing.begin() + 1;
            missing.erase(missing.begin()+index-1,missing.begin()+index);
            }
        }
        //Find the kth element:
        if(missing.empty()==false) 
        {
            return missing[k-1];
        }
        else if(missing.empty()==true) 
        {
            return maxi+k; 
        }
        return 0;
    }
};