class Solution {
public:
    vector<int> getRow(int rowIndex) {
     vector<vector<int>> r(rowIndex+1);
        for(int i=0; i<rowIndex+1; i++){
          r[i]=  vector<int>(i+1 ,1);
            for(int j=1; j<i; j++){
                r[i][j] = r[i-1][j] + r[i-1][j-1];
            }
        }
        return r;
    }
};








