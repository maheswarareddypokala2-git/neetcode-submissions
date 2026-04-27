class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int lft=0,rgt=numbers.size()-1;
        while(lft<rgt){
            if(numbers[lft]+numbers[rgt]==target) return {lft+1,rgt+1};
            if(numbers[lft]+numbers[rgt]<target) lft++;
            if(numbers[lft]+numbers[rgt]>target) rgt--;
        }
        return {0,0};
    }
};