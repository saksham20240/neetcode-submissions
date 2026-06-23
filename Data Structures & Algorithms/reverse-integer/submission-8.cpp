class Solution {
public:
    int reverse(int x) {
        int residue=0;
        int ans=0;
        while(x!=0)
        {
            residue=x%10;
            x=x/10;

            if(ans>(INT_MAX/10) || (ans==(INT_MAX)/10 && residue>7))
            return 0;
            else if(ans<(INT_MIN/10) || (ans==(INT_MIN/10) && residue<-8 ))
            return 0;
            else
            ans=ans*10+residue;
        }
        return ans;

        
    }
};
