class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        if(k<2) return nums;
        if(k>nums.size()) return {};
        vector<int>ans_vect;
        deque<int>help_deq;
        help_deq.push_back(0);
        for(int i=1;i<nums.size();i++){
            if(!help_deq.empty()&&help_deq.front()<i-k+1) help_deq.pop_front();
            //if(!help_deq.empty()&&nums[i]>=nums[help_deq.front()]){
            //    help_deq.pop_front();
            //    help_deq.push_front(i);
            //}
            while(!help_deq.empty()&&nums[i]>=nums[help_deq.back()]){
             help_deq.pop_back();
            }
            help_deq.push_back(i);
            if(i>=k-1){
                ans_vect.push_back(nums[help_deq.front()]);
            }
        }
        return ans_vect;
    }
};