class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;
        vector<int> result;

        for (int i = 0; i < nums.size(); i++) {
            // Remove elements not in the current window
            if (!dq.empty() && dq.front() == i - k) {
                dq.pop_front();
            }
            
            // Remove elements from the back that are smaller than current element
            while (!dq.empty() && nums[dq.back()] < nums[i]) {
                dq.pop_back();
            }
            
            // Add current element to the deque
            dq.push_back(i);
            
            // Add maximum to result when window is fully formed
            if (i >= k - 1) {
                result.push_back(nums[dq.front()]);
            }
        }
        
        return result;

    }
};