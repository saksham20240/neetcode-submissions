class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int m=s1.length();
        int n=s2.length();
        sort(s1.begin(),s1.end());
        for(int i=0;i<n-m+1;i++)
        {
            bool check=1;
            string temp=s2.substr(i,m);
            sort(temp.begin(),temp.end());
            for(int j=0;j<temp.length();j++)
            {
                if(s1[j]!=temp[j])
                check=0;
            }
            if(check==1)
            return true;
        }
        return false;
    }

};
