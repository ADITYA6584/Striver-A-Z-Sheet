//This is a basic as well as Medium question if they asked u to do it without recursion.

//Approach -> 1 
//Without using Recursion:
class Solution {
public:
    int fib(int n) {
        if (n == 0)
            return 0;
        if (n == 1)
            return 1;
        int prev1 = 1;
        int prev2 = 0;

        for (int i = 2; i <= n; i++) {
            int curr = prev1 + prev2;
            prev2 = prev1;
            prev1 = curr;
        }
        return prev1;
    }
};



//Approach -> 2  Time Complexity -> 2^n
//Using Recursion:
class Solution {
public:
    int fib(int n) {
        if(n==1)
        {
            return 1;
        }
        else if(n>1)
        {
            int ans = fib(n-1)+fib(n-2);
            return ans;
        }
        return 0;
    }
};