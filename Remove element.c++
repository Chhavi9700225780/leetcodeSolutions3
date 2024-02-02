class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

    int size = nums.size();
    int count =0;
     for(int i=0; i< size ; i++){
         if(val != nums[i]){
              nums[count] = nums[i];
             count++;
         }
     }
     return count;
    }
};