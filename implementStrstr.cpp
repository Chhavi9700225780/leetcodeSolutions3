  //Your code here
     bool check(int i, string s, string x) {
    for (int k = 0; k < x.length(); k++) {
        if (s[i+k] != x[k]) return false;
    }
    return true;
}
int strstr(string s, string x)
{
     for (int i = 0; i < s.length(); i++) {
         if (s[i] == x[0]) {
             if(check(i, s, x)) return i;
         }
     }
     return -1;
}