class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.rbegin(),nums.rend());
        vector<vector<int>>ans_vect;
        set<vector<int>>help_map;
        for(int lft=0;lft<nums.size()-2;lft++){
            //bool loop_flg=false;
        for(int rgt=lft+1;rgt<nums.size();rgt++){
                for(int i=rgt+1;i<nums.size();i++){
                    if(nums[lft]+nums[rgt]<nums[i]){
                            break;
                    }
                    else if(nums[lft]+nums[rgt]==-nums[i]){
                        help_map.insert({nums[lft],nums[rgt],nums[i]});
                        break;
                    }
                    else if (nums[lft]+nums[rgt]>nums[i]){
                        continue;
                    }
                }
        }
        }
       for(auto ind : help_map ){
        ans_vect.push_back(ind);
        }
        return ans_vect;
    }
};