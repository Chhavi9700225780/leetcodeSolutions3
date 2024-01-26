class Solution {
public:
    int alternateDigitSum(int n) {
        vector<int> v;
         int sum =0;
         while(n!=0){
             int d= n%10;
             v.push_back(d);
             n =n/10;
         }
         reverse(v.begin() , v.end());
         for(int i=0; i<v.size(); i++){
             if(i%2==0){
                 sum = sum+v[i];
             }
             else{
                 sum = sum - v[i];
             }
         }
         return sum;
    }
};