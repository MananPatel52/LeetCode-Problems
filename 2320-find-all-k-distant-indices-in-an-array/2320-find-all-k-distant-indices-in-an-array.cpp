class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int> store;
        //vector<int> ans;
        unordered_set<int> st;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == key)
                store.push_back(i);
        }
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < store.size(); j++){
                if (abs(i - store[j]) <= k) 
                    st.insert(i);
            }    
        }
        vector<int> ans(st.begin(),st.end());
        sort(ans.begin(), ans.end());

        return ans;
    }
};