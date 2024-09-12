class Solution {
public:
    int missingNumber(vector<int>& nums) {
       
           
        int n=nums.size();
        int p=0; 

       
        for(int i=1;i<=n;i++){
            p^=i;
        }
      
        for(auto it:nums) p^=it;

        
        return p;
    }
};