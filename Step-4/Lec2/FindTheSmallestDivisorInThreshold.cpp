//This is a leetcode question

//This is preety much same question similar to KOko Eating Banana

//Appraoch: Using Binary Search
/*
Time Complexity -> O(n(log(max(nums))))
Space Complexity  -> O(1)
*/

/*
Explain:
1. In this question we needed to find the mini divisor that can divide the whole array
2. As well as the sum of the dividend must be equal or less than the threshold number.
*/

class Solution {
    //Helper function
    private:
    int possible(vector <int> nums,int mid)
    {
        int sum =0;
        for(int i=0;i<nums.size();i++)
        {
            int upvalue = ceil((double)nums[i]/(double)mid);
            sum = sum + upvalue;
        }
        return sum;
    }
public:
    int smallestDivisor(vector<int>& nums, int threshold) 
    {
        int low = 1;
        int high = *max_element(nums.begin(),nums.end());
        int mid = low + (high-low)/2;
        while(low<=high)
        {
            int check = possible(nums,mid);
            if(check>threshold)
            {
                low = mid+1;
            }
            else
            {
                high = mid-1;
            }
            mid = low + (high-low)/2;
        }
        return low;
    }
};