class Solution {
public:
    string minWindow(string s, string t) {
        if(t.size()>s.size())return "";
           unordered_map<char,int>help_map,main_map,rem_char_map;
           for(char ch : t){
            help_map[ch]++;
            main_map[ch]++;
           }
            int ans=INT_MAX,ans_lft=0,ans_rgt=0,lft=0,sum=t.size();
            string res_str="";
            for(int rgt=0;rgt<s.size();rgt++){
                if(help_map[s[rgt]]>0){
                    help_map[s[rgt]]--;
                    sum--;
                    while(lft<=rgt&&sum==0){
                        if(rgt-lft+1<ans){
                        ans_lft=lft;
                        ans_rgt=rgt;
                        ans=rgt-lft+1;
                        }
                        if(main_map[s[lft]]>0&&rem_char_map[s[lft]]==0){
                            help_map[s[lft]]++;
                            sum++;
                        }
                        else rem_char_map[s[lft]]--;
                        lft++;
                    }
                }
                else rem_char_map[s[rgt]]++;
            }
            if(ans<INT_MAX){
                for(int i=ans_lft;i<=ans_rgt;i++){
                        res_str+=s[i];
                }
            }
        return res_str;
    }
};