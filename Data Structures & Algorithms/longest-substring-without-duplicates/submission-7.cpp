class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlen=INT_MIN;
        int n=s.length();
        if(n==0)
        return 0;
        for(int i=0;i<n;i++)
        {
            int arr[256]={0};
            int len=0;
            for(int j=i;j<n;j++)
            {
                if(arr[s[j]]==1)
                break;
                len++;
                maxlen=max(maxlen,len);
                arr[s[j]]++;
                
            }

        }
        return maxlen;
        
    }
};
