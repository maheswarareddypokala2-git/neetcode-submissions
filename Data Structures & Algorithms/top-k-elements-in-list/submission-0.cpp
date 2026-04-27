class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>help_map;
        for(int num : nums){
            help_map[num]++;
        }
        vector<pair<int,int>>ans_map;
        auto it=help_map.begin();
        for(;it!=help_map.end();it++){
            ans_map.push_back({it->second,it->first});
        }
        sort(ans_map.begin(),ans_map.end(),[] (const auto& a, const auto &b){
            return a.first>b.first;
        }
        );
        vector<int>ans;
        auto index=ans_map.begin();
        while(k--!=0&&index!=ans_map.end()){
           ans.push_back(index->second);
           index++; 
        }
        return ans;
    }
};