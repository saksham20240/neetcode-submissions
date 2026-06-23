class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int XOR1=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            XOR1=XOR1^nums[i];
        }
        int XOR2=0;
        for(int i=0;i<=n;i++)
        {
            XOR2=XOR2^i;
        }
        return XOR1^XOR2;
        
    }
};
