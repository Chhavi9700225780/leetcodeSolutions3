class Solution {
public:
    bool isPowerOfTwo(int n) {
     for(int i=0; i<=30; i++){
         int ans = pow(2 , i);
        if(ans==n){
             return true;
        }
     }  
    return false; 
    }
};
int n; 
cin>>n;
if(n==0){
    return false;

}
return floor(log( 2*(n))) == ceil(log(2*n)) ? True :False ;


while(n>1 && n&1==0){
   n = n>>1;
}
if(n==1){
    return true;
}