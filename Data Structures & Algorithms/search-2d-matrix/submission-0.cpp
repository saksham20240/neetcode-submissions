class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int low_outer=0;
        int high_outer=n-1;
        while(low_outer<=high_outer)
        {
            int mid_outer=(low_outer+high_outer)/2;
            if(matrix[mid_outer][0]<=target && target<=matrix[mid_outer][m-1])
            {
                int low_inner=0;
                int high_inner=m-1;
                while(low_inner<=high_inner)
                    {
                        int mid=(low_inner+high_inner)/2;
                        if(matrix[mid_outer][mid]==target)
                        return true;
                        else if(matrix[mid_outer][mid]<target)
                        low_inner=mid+1;
                        else
                        high_inner=mid-1;
                    }
            }

            if(matrix[mid_outer][m-1]<target)
            {
                low_outer=mid_outer+1;
            }
            else
            {
                high_outer=mid_outer-1;
            }
        
        }
        return false;
        
    }
};
