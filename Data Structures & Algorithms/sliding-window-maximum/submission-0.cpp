class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        if(k<2) return nums;
        if(k>nums.size()) return {};
        vector<int>ans_vect(nums.size()-k+1,10001);
        map<int,vector<int>,greater<int>>help_map;
        for(int i=0;i<nums.size();i++){
            help_map[nums[i]].push_back(i);
        }
        for(auto ind = help_map.begin(); ind!=help_map.end();ind++){
            for(auto j:ind->second){
                int lft=max(0,(int)j-k+1),rgt=min((int)nums.size()-k+1,j+1);
                int my_lft=min(lft,rgt),my_rgt=max(lft,rgt);
                while(my_lft<my_rgt){
                    if(ans_vect[my_lft]==10001){
                        ans_vect[my_lft]=ind->first;
                    }
                    my_lft++;
                }
            }
        }
        return ans_vect;
    }
};