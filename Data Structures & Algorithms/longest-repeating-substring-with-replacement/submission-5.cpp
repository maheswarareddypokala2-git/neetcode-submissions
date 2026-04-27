class Solution {
public:
    int characterReplacement(string s, int k) {
            int ans=0,lft=0,max_cnt=0;
            unordered_map<char,int>help_map;
            for(int rgt=0;rgt<s.size();rgt++){
                help_map[s[rgt]]++;
                max_cnt=max(max_cnt,help_map[s[rgt]]);
                while(rgt-lft+1-max_cnt>k){
                    help_map[s[lft]]--;
                    lft++;
                }
                ans=max(ans,rgt-lft+1);
            }
            return ans;
    }
};