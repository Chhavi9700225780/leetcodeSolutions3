class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int s=nums[0];
	int f = nums[2];
	while(s!=f){
		s = nums[s];
		f= nums[nums[f]];
	}
	s= nums[0];
	while(s!=f){
		s =nums[s];
		f= nums[f];
	}
	return f;
}

    
};