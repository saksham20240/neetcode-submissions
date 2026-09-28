class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int>seen;
        for(auto it :nums)
        {
            if(seen.find(it)!=seen.end())
            return it;
            else
            seen.insert(it);
        }
        return -1;

        
    }
};
