class Solution {
public:

    bool cmp(int str1[],int str2[])
    {
        for(int i=0;i<26;i++)
        {
            if(str1[i]!=str2[i])
            return false;
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int m=s1.length();
        int n=s2.length();
        int str1[26]={0};
        int str2[26]={0};
        for(int i=0;i<m;i++)
        {
            int index1=s1[i]-'a';
            str1[index1]++;
        }

        //Intial window
        int i=0;
        while(i<m && i<n)
        {
            int index2=s2[i]-'a';
            str2[index2]++;
            i++;
        }

        if(cmp(str1,str2))
        return true;

        //Next window
        while(i<n)
        {
            int index3=s2[i]-'a';
            str2[index3]++;
            int old_index=s2[i-m]-'a';
            str2[old_index]--;
            i++;
            if(cmp(str1,str2))
            return true;
        }
        return false;  
    }
    

};
