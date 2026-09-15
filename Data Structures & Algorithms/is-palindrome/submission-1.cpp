class Solution {
public:

    bool alpha(char ch)
    {
        if(ch>='A'&&ch<='Z' ||
        ch>='a'&&ch<='z' ||
        ch>='0'&&ch<='9'
        )
        return 1;
        else
        return 0;

    }

    char lower(char ch)
    {
        if(ch>='A'&&ch<='Z')
        return ch-'A'+'a';
        else
        return ch;
    }





    bool isPalindrome(string s) {
        int n=s.length();
        int low=0;
        int high=n-1;
        while(low<=high)
        {
            if(alpha(s[low])&& alpha(s[high]))
            {
                if(lower(s[low])!=lower(s[high]))
                return false;
                low++;
                high--;
            }
            else if(!alpha(s[low]))
            low++;
            else
            high--;
        }
        return true;
        
    }
};
