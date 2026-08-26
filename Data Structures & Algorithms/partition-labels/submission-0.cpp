class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n=s.length();
        unordered_map<char,int>mpp;
        for(int i=n-1;i>=0;i--)
        {
            if(mpp.find(s[i])==mpp.end())
            mpp[s[i]]=i;
        }
        vector<int> partition;
        int start_index=0;
        int end_index=mpp[s[0]];
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(mpp[s[i]]>end_index)
            {
            end_index=mpp[s[i]];
            }
            if(cnt==end_index)
            {
            partition.push_back(end_index-start_index+1);
            start_index=end_index+1;
            }
            cnt++;
            
        }
        return partition;

        
    }
};