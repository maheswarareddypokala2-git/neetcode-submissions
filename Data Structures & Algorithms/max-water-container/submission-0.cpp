class Solution {
public:
    int maxArea(vector<int>& height) {
      int ans=0;
      //for(int int lft=0;lft<height.nums()-1;lft++){
        int lft=0;
        int rgt=height.size()-1;
        while(rgt>lft){
            ans=max(ans,(rgt-lft)*min(height[lft],height[rgt]));
            if(height[rgt]>height[lft]){
                lft++;
            }
            else rgt--;
        }
      //}
      return ans;
    }
};