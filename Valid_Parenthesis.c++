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
class Solution {
public:
    bool isValid(string s) {
         std::stack<char> stack;
    for (char c: s) {
        if (c == '(') { // openning brackets
            stack.push(')'); // push the paired bracket
        } else if (c == '[') {
            stack.push(']');
        } else if (c == '{') {
            stack.push('}');
        }else { // close brackets
            if (stack.empty()){ //if stack is empty, it means there is only left bracket
                return false;
            }
            if (stack.top()==c){ // paired bracket
                stack.pop();
                   }else{
                return false;
            }
        }
    }
    return stack.empty();
    }
};