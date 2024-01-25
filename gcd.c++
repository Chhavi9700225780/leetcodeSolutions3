  int max=*max_element(nums.begin(),nums.end());
        int min=*min_element(nums.begin(),nums.end());
        int gcd=1;
        for (int i=1; i<=min; i++)
        {
            if (min%i==0 && max%i==0 && i>gcd) gcd=i;
        }
        return gcd;

         int findGCD(vector<int>& nums) {
        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(int i=0;i<nums.size();i++){
            maxi=max(maxi,nums[i]);
            mini=min(mini,nums[i]);
        }
        
        return __gcd(maxi,mini);