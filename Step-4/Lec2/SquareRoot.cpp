//Coding Ninjas 

/*
In this question we were required to find the square root of the given number.
Using Binary Search
**************************
Key Point is Edge Case and the ans should be updated when 
mid*mid<n for the lower value and that is only required.
*/

int floorSqrt(int n)
{
    long long ans = -1;   //Important
    long long start =0;
    long long end = n;
    long long mid = start+(end-start)/2;

    //Edge Cases
    if(n==0 || n==1) return n;
    
    while(start<=end)
    {
        if(mid*mid == n)
        {
            return mid;
        }
        else if(mid*mid>n)
        {
            end =mid-1;
        }
        else
        {
            ans = mid;      //Important
            start = mid+1;
        }
        mid = start+(end-start)/2;
    }
    return ans;
}
