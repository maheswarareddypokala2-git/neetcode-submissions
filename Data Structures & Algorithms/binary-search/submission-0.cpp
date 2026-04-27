class Solution {
public:
    int search(vector<int>& nums, int target) {
          int lft=0,rgt=nums.size()-1;
          int ans=-1;
          while(lft<=rgt){
            int mid=lft + (rgt-lft)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]>target)rgt=mid-1;
            else lft=mid+1;
          }
          return ans;
    }
};