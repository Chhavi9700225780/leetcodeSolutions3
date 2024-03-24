/*
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int m = matrix.size();
        int n= matrix[0].size();
        int count=0;
        int total= m*n;
        int endr = m-1;
        int endc= n-1;
        int startr=0;
        int startc=0;
        while(count < total){
         for(int i=startc; count<total && i<endc; i++){
            ans.push_back(matrix[startr][i]);
            
         }startr++;

         for(int i=startr; count<total && i<endr; i++){
            ans.push_back(matrix[i][endc]);
           
         } endc--;

         for(int i=endc; count<total && i>=startc; i--){
            ans.push_back(matrix[endr][i]);
            
         }endr--;

         for(int i=endr; count<total && i>=startr; i--){
            ans.push_back(matrix[i][startc]);
           
         } startc++;
        }
        return ans;
    }
};
*/
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& m) {
        int n=m.size();
        int l=m[0].size();
        int top=0,right=l-1,bottom=n-1,left=0,k=0;
        vector<int>arr;

        while(left<=right && top<=bottom)
        {
            for(int i=left;i<=right;i++)
            {
                arr.push_back(m[top][i]);
            }
            top++;
            for(int i=top;i<=bottom;i++)
            {
                arr.push_back(m[i][right]);
            }
            right--;
            if(top<=bottom){
            for(int i=right;i>=left;i--)
            {
                arr.push_back(m[bottom][i]);
            }
            bottom--;
            }
            if(left<=right){
            for(int i=bottom;i>=top;i--){
                arr.push_back(m[i][left]);
            }
            left++;
            }
        }
        return arr;
    }
};