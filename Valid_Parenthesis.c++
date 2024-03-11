class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,int> sys={{'(',-1},{'{',-2},{'[',-3},{')',1},{'}',2},{']',3}};
        stack<char> st;
        for(auto b:s){
            if(sys[b]<0){
                st.push(b);
            }
            else{
                if(st.empty()){
                    return false;
                }
               else{
                    char top=st.top();
                if(sys[top]+sys[b]!=0){
                    return false;
                }
                }
                st.pop();
            }
        }
  return st.empty();
    }
};