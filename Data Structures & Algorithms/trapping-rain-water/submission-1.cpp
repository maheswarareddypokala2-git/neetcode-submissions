class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int total_water=0;
        vector<int> pref_height(n),suf_height(n);
        pref_height[0]=height[0];
        suf_height[n-1]=height[n-1];
        for(int ind=1;ind<n;ind++){
            pref_height[ind]=max(pref_height[ind-1],height[ind]);
            suf_height[n-1-ind]=max(suf_height[n-1-ind+1],height[n-1-ind]);
        }
        for(int ind=0;ind<n;ind++){
            //int ind_water=0;
            //if ( min(pref_height[ind],suf_height[ind])-height[ind]>0 )
            // ind_water=(min(pref_height[ind],suf_height[ind])-height[ind]);
             total_water+=min(pref_height[ind],suf_height[ind])-height[ind];
        }
        //ind_vol[ind] = min(lft_max,rgt_max)-height[ind];
        return total_water;
    }
};