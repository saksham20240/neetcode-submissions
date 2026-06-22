class Solution {
public:
    vector<int> countBits(int n) {
        int size=n+1;
        vector<int>ans(size,0);
        for(int i=0;i<size;i++)
        {
            ans[i]=i;
        }

        vector<int> ans_final;
        for(int i=0;i<size;i++)
        {
            int cnt=0;
            for(int pos=0;pos<32;pos++)
            {
            if (ans[i]&(1<<pos))
            cnt++;
            }
            ans_final.push_back(cnt);
        }
        return ans_final;

    }

};
