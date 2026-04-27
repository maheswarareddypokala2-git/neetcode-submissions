class Solution {
public:
    int search(vector<int>& nums, int target) {
             int lft=0,rgt=nums.size()-1;
             while(lft<rgt){
                int mid=lft + (rgt-lft)/2;
                if(nums[mid]==target) return mid;
                else if(nums[mid]>target){
                    if(nums[rgt]<nums[lft]) {
                    if(nums[mid]<nums[lft])  rgt=mid-1;
                    else if(nums[lft]==target) return lft;
                    else if(nums[lft]>target)lft=mid+1;
                    else  rgt=mid-1;
                    }
                    else {
                     rgt=mid-1;
                    }
                }
                else if (nums[mid]<target){
                    if(nums[rgt]>nums[lft]) {
                    lft=mid+1;
                    }
                    else if(nums[rgt]<nums[lft]){
                    if(nums[mid]>nums[lft])lft=mid+1; 
                    else if(nums[rgt]==target) return rgt;
                    else if(nums[rgt]>target) lft=mid+1;
                    else rgt=mid-1;
                    }
                }
             }
             if(nums[lft]==target) return lft;
             return -1; 
    }
};