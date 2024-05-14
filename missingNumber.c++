class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        // Your code goes here
        int ans1=0, ans2=0;
        
        for(int i=0; i< n-1; i++){
            ans1= ans1^array[i];
            ans2=ans2^(i+1);
        }
        ans2 = ans2^n;
       
        return (ans1 ^ ans2);
    }
};