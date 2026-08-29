class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        vector<int> ans=digits;
        for(int i=n-1;i>=0;i--)
        {
            if(ans[i]<9)
            {
                ans[i]++;
                return ans;
            }
            ans[i]=0;
        }
        vector<int> ans1(n+1,0);
        ans1[0]=1;
        return ans1;
        
    }
};