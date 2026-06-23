class Solution {
public:
    double myPow(double x, int n) {
        double ans=1;
        if(n<0)
        {
            n=(-1)*n;
            x=1/x;
        }
        while(n!=0)
        {
            ans=ans*x;
            n--;
        }
        return ans;
        
    }
};
