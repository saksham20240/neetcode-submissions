
class Solution {
public:

    bool anagrams(string s1,string s2)
    {
        if(s1.size()!=s2.size())
        return false;
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]!=s2[i])
            return false;
        }
        return true;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>final;
        vector<bool> visited(strs.size(),false);
     
        for(int i=0;i<strs.size();i++)
        {
            vector<string> ans;
            if(visited[i])
            continue;
            else
            {
                ans.push_back(strs[i]);
                visited[i]=true;
            }

            for(int j=i+1;j<strs.size();j++)
            {
                if(visited[j])
                continue;

                else
                {
                    bool val=anagrams(strs[i],strs[j]);
                    if(val)
                    {
                        ans.push_back(strs[j]);
                        visited[j]=true;
                    }
                    else
                    continue;
                }
            }
            final.push_back(ans);
        

        }
        return final;
        
    }
};
