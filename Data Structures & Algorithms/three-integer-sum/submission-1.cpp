class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans_vect;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        //if(nums[0]>0) return {};
         for(int ind1=0;ind1<n-2;ind1++){
            int lft=ind1+1;
            int rgt=n-1;
            while(lft<rgt){
                if(nums[lft]+nums[rgt]+nums[ind1]==0) {
                    ans_vect.push_back({nums[ind1],nums[lft],nums[rgt]});
                    while(ind1<n-2&&nums[ind1]==nums[ind1+1])ind1++;
                    lft++;
                    while(lft<rgt&&nums[lft]==nums[lft-1])lft++;
                    rgt--;
                    while(rgt>lft&&nums[rgt]==nums[rgt+1])rgt--;
                }
                else if(nums[lft]+nums[rgt]+nums[ind1]<0)lft++;
                else rgt--;
            }
         }
        return ans_vect;
    }
};