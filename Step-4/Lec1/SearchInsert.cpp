//This is a simple Logic Question
/*

****Just when u dont get any number then return the left/Start pointer

*/

class Solution {
public:
    int searchInsert(vector<int>& num, int target) 
    {
        // Using Binary Search
        int start = 0;
        int end = num.size() - 1;
        int mid;

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

        // If target is not found, return the position where it should be inserted
        return start;
    }
};
