class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.length();
        int max_len=0;
        for(int i=0;i<n;i++)
        {
            int max_freq=0;
            int hash[26]={0};
            for(int j=i;j<n;j++)
            {
                hash[s[j]-'A']++;
                max_freq=max(max_freq,hash[s[j]-'A']);
                int changes=(j-i+1)-max_freq;
                if(changes<=k)
                {
                    max_len=max(max_len,j-i+1);
                }
                else
                break;
            }
        }
        return max_len;
        
    }
};
