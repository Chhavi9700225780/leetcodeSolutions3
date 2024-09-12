class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count =0;
        vector<int>ans;
        int maxi =-1;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=0){
                count++;
            }
            if(nums[i]==0 ||i==nums.size()-1){
              ans.push_back(count)  ;
                count=0;
            }
        }
        for(int j=0; j<ans.size(); j++){
            if(maxi<ans[j]){
                maxi = ans[j];
            }
        }
        return maxi;
    }
};