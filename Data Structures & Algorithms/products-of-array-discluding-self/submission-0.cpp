class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans;
        int pref_prod[nums.size()],suf_prod[nums.size()];
        pref_prod[0]=1;
        suf_prod[nums.size()-1]=1;
        for(int i=1;i<nums.size();i++){
            pref_prod[i]=nums[i-1]*pref_prod[i-1];
            suf_prod[nums.size()-1-i]=nums[nums.size()-i]*suf_prod[nums.size()-i];
        }
        for ( int i=0;i<nums.size(); i++){
            ans.push_back(pref_prod[i]*suf_prod[i]);
        }
        return ans;
    }
};
