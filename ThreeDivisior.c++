bool isThree(int n){
    int ans=0;
    for(int i=0; i<n; i++){
        if(n%i==0){
            ans++;
        }
    }
    if(ans==3){
        return true;
    }
    return false;
}