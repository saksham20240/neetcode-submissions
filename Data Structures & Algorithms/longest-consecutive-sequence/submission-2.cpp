class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>st;
        for(int i=0;i<nums.size();i++)
        {
            st.insert(nums[i]);
        }
        int longest=0;
        int len=0;
        int prev=INT_MIN;
        for(auto it:st)
        {
            if(it==prev+1)
            len++;
            else
            len=1;
            longest=max(longest,len);
            prev=it;
        }
        return longest;
        
    }
};
