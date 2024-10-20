//Leetcode question

//Need to solve using Binary Search:

class Solution {
    //Helper function to calculate the day 
    int totalday(vector <int> weights,int mid)
    {
        int day=1;
        int load =0;
        for(int i =0;i<weights.size();i++)
        {
            if(load+weights[i]>mid)
            {
                day++;
                load = weights[i];
            }
            else
            {
                load = load + weights[i];
            }
        }
        return day;
    }
public:
    int shipWithinDays(vector<int>& weights, int days) 
    {
        int low =*max_element(weights.begin(),weights.end());
        //Finding the max
        int high=0;
        for(int i =0;i<weights.size();i++)
        {
            high = high+weights[i];
        }
        int mid = low +(high-low)/2;
        while(low<=high)
        {
            int reqday = totalday(weights,mid);
            if(reqday>days)
            {
                low = mid+1;
            }
            else
            {
                high = mid-1;
            }
            mid = low +(high-low)/2;
        }
        return low;
    }
};