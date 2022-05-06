
/*Implement pow(x, n), which calculates x raised to the power n (i.e., xn).*/

class Solution {
public:
    double negPow(double x,int n)
    {
        double ans=1;
        x=1/x;
        while(n>0)
        {
            if(n&1)
                ans=ans*x;
            x=x*x;
            n=n/2;
        }
        return ans;
    }
    double myPow(double x, int n) {
        double ans=1;
        if(n<0)
            return negPow(x,abs(n));
        while(n>0)
        {
            if(n&1)
                ans=ans*x;
            x=x*x;
            n=n/2;
        }
        return ans;
    }
};

