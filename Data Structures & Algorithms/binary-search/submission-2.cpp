class Solution {
public:
    int bs(vector<int> &nums,long low,long high,int target)
    {
        if(low>high)
        return -1;
        //Base case

        long mid=low+ (high-low)/2;
        if(nums[mid]==target)
        return mid;
        else if (nums[mid]>target)
        return bs(nums,low,mid-1,target);
        else
        return bs(nums,mid+1,high,target);
    }




    int search(vector<int>& nums, int target) {
        int n=nums.size();
        return bs(nums,0,n-1,target);
        
    }
};
