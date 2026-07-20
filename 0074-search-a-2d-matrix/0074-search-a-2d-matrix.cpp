class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l=0;
        int h=(matrix.size())*(matrix[0].size())-1;
        while(l<=h){
            int mid = (l+h)/2;
            int r=mid/(matrix[0].size());
            int c=mid%(matrix[0].size());
            if(target==matrix[r][c]){
            return true;
            }
            else if(target>matrix[r][c]){
                l=mid+1;
            }
            else{
                    h=mid-1;
            }
            
        }
        return false;
    }
};