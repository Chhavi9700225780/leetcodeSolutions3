#include<iostream>
int main(){
    int n, m, i;
    cin>>n>>i;
    m =1;
    m = m<<i;
    if(n&m){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}