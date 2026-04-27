class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        if (k < 2) return nums;
        if (k > nums.size()) return {};

        int n = nums.size();
        vector<int> ans_vect(n - k + 1, 10001);
        map<int, vector<int>, greater<int>> help_map;

        // Map value -> list of indices, sorted in descending value order
        for (int i = 0; i < n; i++) {
            help_map[nums[i]].push_back(i);
        }

        for (auto it = help_map.begin(); it != help_map.end(); ++it) {
            int val = it->first;
            for (int idx : it->second) {
                // Determine valid window start indices where this index contributes
                int lft = max(0, idx - k + 1);
                int rgt = min(n - k, idx);

                for (int w = lft; w <= rgt; ++w) {
                    if (ans_vect[w] == 10001) {
                        ans_vect[w] = val;
                    }
                }
            }
        }

        return ans_vect;
    }
};
