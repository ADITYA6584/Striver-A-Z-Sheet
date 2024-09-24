/*
This is a simple but little tricky question 

Approch:
This is important sum = carray
1. Iterate in opposite order
2. Add it .
3. If the sum is more than 1 then carray =1
4. else add to string and then sum =0;

*/
class Solution {
public:
    string addBinary(string a, string b) 
    {
       int carry= 0;
       int sum =0;
       int lengtha = a.size()-1;
       int lengthb = b.size()-1;
       string ans="";
       while(lengtha>=0 || lengthb>=0 || carry>0)
       {
        sum = carry;
        if(lengtha>=0)
        {
        sum = sum+(a[lengtha]-'0');
        lengtha--;
        }
        if(lengthb>=0)
        {
            sum = sum +(b[lengthb]-'0');
            lengthb--;
        }
        if(sum>1)
        {
            ans = ans+to_string(sum%2);
            carry =1;
        }
        else
        {
            ans = ans+to_string(sum%2);
            carry=0;                        //Here i got stuck
        }
        sum =0;
       }
       reverse(ans.begin(),ans.end());
       return ans;
    }
};