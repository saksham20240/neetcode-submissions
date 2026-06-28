
class Solution {
public:
    int time_to_eat(vector<int> &piles,int k)
    {
        int n=piles.size();
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            cnt+=ceil((double)piles[i]/k);
        }
        return cnt;
    }




    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int maxi=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(piles[i]>maxi)
            maxi=piles[i];
        }
        int high=maxi;
        int low=1;
        int ans=-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            int required_time=time_to_eat(piles,mid);
            if(required_time<=h)
            {
                ans=mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return ans;
    }
};
