class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        // for(int i = 1; i<nums.size(); i++){
        //     if(nums[i] == nums[i-1]){
        //         return true;
        //     }
        // }
        // return false;

        unordered_set<int> set;

        for(int i = 0; i<nums.size(); i++){
            set.insert(nums[i]);
        }

        if(set.size()<nums.size()){
            return true;
        }
        return false;
    }
};