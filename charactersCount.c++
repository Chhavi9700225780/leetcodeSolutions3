char getmaxiCharacters(string s){
    int a[26];
    for(int i=0; i<s.length(); i++){
        char ch=s[i];
        int count;
        if(ch>='a'&& ch<='z'){
            count = count-'a';
        }
        else{
            count=count-'A';
    
        a[count]++;
    }
    int maxi =-1;
    int ans=0;
    for(int i=0; i<s.length(); i++){
        if(maxi<a[i]){
            ans =i;
            maxi =a[i];
        }
    }
    char final = 'a'+ans;
    return final; 
}