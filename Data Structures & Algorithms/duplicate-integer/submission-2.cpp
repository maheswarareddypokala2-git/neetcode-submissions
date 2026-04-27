class Solution {
public:
    bool hasDuplicate( vector<int> &nums){
        //if(nums.size()<2) return false;
        unordered_set<int>noDupl;
        for ( auto i : nums){
            if(noDupl.count(i)) return true;
            noDupl.insert(i);
        }
        return false;
    }
};