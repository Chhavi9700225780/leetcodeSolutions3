class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r= matrix.size();
        int c= matrix[0].size();
        int i=0;
        int j= c-1;
        while(i<r && j>=0){
            int e = matrix[i][j];
            if( e==target){
                return 1;
            }
            if(e < target){
                i++;
            }
            else{
                j--;
            }
        }
        return 0;
    }
};