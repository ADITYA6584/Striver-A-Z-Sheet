//This is question we are required to find the minimum speed of eating bananan so the koko can eat it completely.

/*
//Approach 1--> Brute Force Method
1. First take the speed to be 1;
2. Now calucate the ceil value of that speed and if it more than the given H value then increment speed value.
3. Else increase the speed of eating banana.
*/

class Solution {
    private:
    // Private helper function
    int total(vector <int> time) 
    {
        int sum =0;
        //Iterate
        for(int i=0;i<time.size();i++)
        {
            sum = sum+time[i];
        }
        return sum;
    }
public:
    int minEatingSpeed(vector<int>& nums, int h) 
    {
        int speed =1;
        vector <int> time;
        while(true)
        {
            for(int i=0;i<nums.size();i++)
        {
            int instant = ceil((double)nums[i]/(double)speed); 
            time.push_back(instant);
        }
        //Check
        int totaltime =total(time);
        if(totaltime==h)
        {
            return speed;
        }
        else if(totaltime>h)
        {
            speed++;
        }
        //Removing the array:
        time.erase(time.begin(),time.end());
        }      
    }
};


//Approach 2-> Using Binary Search the best solution:
/*
1. Point low to 1 and not 0.
2. Take the condition to (low<mid) for avoiding TLE.
3. Then apply the condition if the totaltime is less then the h then high =mid; and else low = mid+1;
*/
class Solution {
    private:
    // Private helper function
    int total(vector <int> nums,int mid) 
    {
        long long sum =0;
        //Iterate
        for(int i=0;i<nums.size();i++)
        {   
            int instant = ceil((double)nums[i]/(double)mid); 
            sum = sum+instant;
        }
        return sum;
    }
public:
    int minEatingSpeed(vector<int>& nums, int h) 
    {
        int low =1;
        int high = *max_element(nums.begin(),nums.end());
        int mid = low+(high-low)/2;
        while(low<high)
        {
        //Check
        int totaltime =total(nums,mid);
        if(totaltime<=h) //Tricky part
        {
            
            high = mid;
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