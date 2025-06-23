class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;
        vector<int> result;

        for (int i = 0; i < k; i++) {
            int element = nums[i];
            while (!dq.empty() && element > nums[dq.back()]) {
                dq.pop_back();
            }
            dq.push_back(i);
        }

        for(int i = k; i<nums.size(); i++){
            result.push_back(nums[dq.front()]);

            if(!dq.empty() && i - dq.front() >= k){
                dq.pop_front();
            }

            int element = nums[i];
            while (!dq.empty() && element > nums[dq.back()]) {
                dq.pop_back();
            }
            dq.push_back(i);
        }
        result.push_back(nums[dq.front()]); 
        return result;

    }
};