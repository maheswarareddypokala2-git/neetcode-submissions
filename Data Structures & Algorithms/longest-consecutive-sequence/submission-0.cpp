class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
            if(nums.size()<2) return nums.size();
            int ans=1;
            unordered_set<int>help_set;
            for( int num : nums){
                help_set.insert(num);
            }
            for(int num : help_set){
                if(help_set.find(num-1)==help_set.end()){
                int cnt=1;
                while(help_set.find(num+cnt)!=help_set.end()){
                    cnt++;
                }
                ans=max(ans,cnt);
            }
            }
            return ans;
    }
};