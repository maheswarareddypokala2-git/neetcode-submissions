class Solution {
public:
    int findMin(vector<int>& nums) {
        int lft=0,rgt=nums.size()-1;
        while(lft<rgt){
            //if(lft==rgt)return nums[lft];
            int mid=lft+(rgt-lft)/2;
            if(nums[mid]>nums[rgt])lft=mid+1;
            else if(nums[mid]<nums[rgt])rgt=mid;
        }
    return nums[lft];
    }
};