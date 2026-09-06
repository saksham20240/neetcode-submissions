class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st(nums.begin(),nums.end());
        int longest=0;
        int len=0;
        int currelement=0;
        for(auto num:st)
        {
            if(st.find(num-1)==st.end())
            {
                len=1;
                currelement=num;

                while(st.find(currelement+1)!=st.end())
                {
                    currelement++;
                    len++;
                }
            }
            longest=max(longest,len);
        }

        return longest;
        
        
    }
};