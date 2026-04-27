class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size()<2) return s.size();
        string new_str="";
        for ( char ch : s){
            if(isalnum(static_cast<unsigned char>(ch)) ){
                new_str+=tolower(static_cast<unsigned char>(ch));
            }
        }
        cout<<new_str <<" ";
        for (int ind=0;ind<new_str.size()&&ind<=new_str.size()-ind-1; ind++){
            if(new_str[ind]!=new_str[new_str.size()-ind-1]) return false;
        }
        return true;
    }
};