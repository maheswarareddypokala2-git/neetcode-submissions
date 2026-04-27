class Solution {
public:
    bool isValid(string s) {
        stack<char>stk1;
        for(auto ch : s){
            if(ch=='(' || ch=='{' || ch=='[')stk1.push(ch);
            else if(ch==')'){
                if(stk1.empty() || stk1.top()!='(' ) return false;
                 stk1.pop();
            }
             else if(ch=='}'){
                  if(stk1.empty() || stk1.top()!='{' ) return false;
                 stk1.pop();
            }
             else if(ch==']'){
                  if(stk1.empty() || stk1.top()!='[' ) return false;
                 stk1.pop();
            }
        }
        if(!stk1.empty()) return false;
        return true;
    }
};