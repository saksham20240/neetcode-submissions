class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ans;
        int n= temperatures.size();
        for(int i=0;i<n;i++)
        {
            int cnt=0;
            int j=i;
            for(;j<n;j++)
            {
                if(temperatures[i]>=temperatures[j])
                {
                    cnt++;
                }
                if(temperatures[i]<temperatures[j])
                {
                    ans.push_back(cnt);
                    break;
                }

            }
            if(j==n)
            ans.push_back(0);
        }
        return ans;
        
    }
};
