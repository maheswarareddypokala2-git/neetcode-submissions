class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int>help_map;
       for ( auto i=0;i<nums.size();i++){
        if(help_map[target-nums[i]]!=0) return {help_map[target-nums[i]]-1,i};
        help_map[nums[i]]=i+1;
       }
       return {0,0};
}
};
