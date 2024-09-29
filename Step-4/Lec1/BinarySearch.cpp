/*
Simple Binary Search Algorithm
*/
class Solution {
public:
    int search(vector<int>& num, int target) 
    {
        // Using Binary Search
        int start = 0;
        int end = num.size() - 1;
        int mid;
        int ans = -1;
        while (start <= end) 
        {
            mid = start + (end - start) / 2;  

            if (num[mid] == target) 
            {
                return mid;  
            }
            else if (num[mid] < target) 
            {
                start = mid + 1;  
            } 
            else 
            {
                end = mid - 1;  
            }
        }
        return ans;
    }
};