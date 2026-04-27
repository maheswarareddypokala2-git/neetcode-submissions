class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()<2) return s.size();
        int lft=0,rgt=1,cnt=1,ans=0;
        unordered_map<char,int>help_map;
        help_map[s[0]]=0;
        while(rgt>lft&&rgt<s.size()){
             if(help_map.find(s[rgt])!=help_map.end()){
                    ans=max(ans,cnt);
                    cnt=rgt-help_map[s[rgt]];
                    lft=help_map[s[rgt]]+1;
                    help_map.clear();
                    for(int i=lft;i<=rgt;i++){
                        help_map[s[i]]=i;
                    }
             }
             else {
                help_map[s[rgt]]=rgt;
                cnt++;
                cout<<s[rgt]<<" "<<cnt<<endl;
             }
             rgt++;
        }
        ans=max(ans,cnt);
        return ans;
    }
};