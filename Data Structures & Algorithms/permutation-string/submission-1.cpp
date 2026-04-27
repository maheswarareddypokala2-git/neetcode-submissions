class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()) return false;
        vector<int>help_vect(26,0);
        for ( char ch : s1){
            help_vect[ch - 'a']++;
        }
        int lft=0,sum=s1.size();
        for(int rgt=0;rgt<s2.size();rgt++){
                while(lft<=rgt&&help_vect[s2[rgt]-'a']==0){
                    help_vect[s2[lft]-'a']++;
                    lft++;
                    sum++;
                }
                help_vect[s2[rgt]-'a']--;
                sum--;
            if(sum==0) return true;
        }
        return false;
    }
};