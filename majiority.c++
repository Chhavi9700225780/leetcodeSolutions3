class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int temp = nums.size()/2;
        int ans;
        map<int,int>m;
        for(auto i:nums){
            m[i]++;
        }
        for(auto j : m){
            if(j.second >temp){
                ans = j.first;
            }
        }
        return ans;
    }
};