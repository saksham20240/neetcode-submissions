class Solution {
public:
    int reverse(int x) {
        bool sign=true;
        if(x<0)
        sign=false;

        long long n=abs((long long)x);
        long long ans=0;
        while(n!=0)
        {
        long long residue=n%10;
        ans=ans*10+residue;
        n=n/10;
        }
        if(sign==true && ans>(long long) INT_MAX)
        return 0;
        else if(sign==false && ans>(long long)INT_MAX+1)
        return 0;
        else if(sign==true)
        return ans;
        else
        return ans*(-1);
        
    }
};
