class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<int> indices(nums.size());
        for (int i = 0; i < nums.size(); ++i) {
            indices[i] = i;
        }
        
        sort(indices.begin(), indices.end(), [&nums](int a, int b) {
            return nums[a] > nums[b];
        });
        
        vector<int> topKIndices(indices.begin(), indices.begin() + k);
        sort(topKIndices.begin(), topKIndices.end());
        
        vector<int> ans;
        for (int idx : topKIndices) {
            ans.push_back(nums[idx]);
        }
        
        return ans;
    }
};