class Solution {
public:

    string encode(vector<string>& strs) {
        string encode="";
        for(int i=0;i<strs.size();i++)
        {
            encode+=to_string(strs[i].length());
            encode+='#';
            encode+=strs[i];
        }
        return encode;
    }

    vector<string> decode(string s) {
        int i=0;
        vector<string> ans;
        while(i<s.length())
        {
            int j=i;
            while(s[j]!='#')
            j++;
            int len=stoi(s.substr(i,j-i));
            i=j+1;
            j=i+len;
            ans.push_back(s.substr(i,len));
            i=j;

        }
        return ans;

    }
};
