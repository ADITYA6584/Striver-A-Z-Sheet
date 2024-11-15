class Solution {
    private:
    double solution (double x , long long n)
    {
        double ans;
        //Base case:
        if(n==0)
        return 1.00;

        //Processing
        else
        {
            //For fast calculation
            double half = solution(x , n/2);
            //If the n is positive
            if(n%2 ==0)
            {
                ans = half*half;
                return ans;
            }
            else
            {
                ans = x*half*half;
                return ans;
            }
        }
        return ans;
    }
public:
    double myPow(double x, int n) {
        //Negative case
        if (n<0)
        {
            long long check = -(long long)n;
            //Now divide by 1;
            return (double)1.00/solution(x,check);
        }
        else return solution(x,n);
    }
};