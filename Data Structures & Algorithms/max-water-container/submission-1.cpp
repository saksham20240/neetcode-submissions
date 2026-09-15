class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int low=0;
        int high=n-1;
        int max_water=INT_MIN;
        int water=0;
        int width=0;
        int hight=0;
        while(low<=high)
        {
            width=high-low;
            hight=min(heights[low],heights[high]);
            water=width*hight;
            max_water=max(water,max_water);
            if(heights[low]<=heights[high])
            low++;
            else
            high--;
        }
        return max_water;
        
    }
};
