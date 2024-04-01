class Solution {
public:
    int countPrimes(int n) {
          if(n == 0 or n ==1)//edge case
    return 0;
    //creating a vector isPrime and marking every integer as true intitally
vector<bool> isPrime(n,true);
//marking 0 and 1 as false because obviously they are not prime
isPrime[0] = isPrime[1] = false;

int cnt = 0;//creating a cnt variable to store the count of prime numbers
for(int i = 2;i<sqrt(n);i++){//looping from 2 to n-1
    if(isPrime[i] == true){//if it is marked as true then mark all it's multiple as false,
    //because they can't be prime as i is already their factor
        for(int j =2*i;j<n;j+=i){
            isPrime[j] = false;
        }
    }
}
//loop through the isPrime vector and if its marked as true then increment the cnt
for(int i = 2;i<n;i++){
    if(isPrime[i] == true){
        cnt++;
    }
}
return cnt;
}
    
};