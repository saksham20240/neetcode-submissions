class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++)
        {
            int book=target-nums[i];
            if(mpp.find(book)!=mpp.end())
            return{mpp[book],i};
            mpp[nums[i]]=i;
        }
        
    }
};
