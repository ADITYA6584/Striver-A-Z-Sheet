//In this question we are need to find minimum number of days to make M bouque of K flowers.

//Optimized option Using Binary Search 
class Solution {
    private:
    bool possible(vector <int> bloomDay , int day , int m,int k)
    {
        //Count
        int count =0;
        //toatl bouque possible:
        int total=0;
        //Checking
        for(int i=0;i<bloomDay.size();i++)
        {
            if(day>=bloomDay[i])
            {
                count++;
            }
            else
            {
                total = total+count/k;
                count=0;
            }
        }
        total = total +count/k;
        if(total>=m)
        {
            return true;
        }
        else  return false;
    }
public:
    int minDays(vector<int>& bloomDay, int m, int k) 
    {
        //Impossible case
        if((long)m*k>bloomDay.size())
        {
            return -1;
        }

        //Day to be start from minimum of array
        int day = *min_element(bloomDay.begin(),bloomDay.end());
        int maxday = *max_element(bloomDay.begin(),bloomDay.end());

        //Binary Search
        int low = day;
        int high = maxday;
        int mid = low+(high-low)/2;
        //Possible cases
        while(low<=high)
        {   
            if(possible(bloomDay,mid,m,k)==true)
            {
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }
            mid = low+(high-low)/2;
        }
        return low;
    }
};
