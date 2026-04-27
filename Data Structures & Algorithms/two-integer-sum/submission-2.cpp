class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int>help_map;
       for ( auto i=0;i<nums.size();i++){

        if(help_map.find(target-nums[i])!=help_map.end()) return {help_map[target-nums[i]],i};
        help_map[nums[i]]=i;
       }
       return {0,0};
}
};
