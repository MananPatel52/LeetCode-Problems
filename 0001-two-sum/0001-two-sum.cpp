class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numToIndex;
        for(int i = 0; i<nums.size(); i++){
            int complement = target - nums[i];
            if(numToIndex.count(complement)){
                return {numToIndex[complement],i};
            }
            numToIndex[nums[i]] = i;
        }
        // vector<int>indx;
        // int n = nums.size();
        // int i = 0;
        // int j = nums.size()-1;
        
        

        
        // while(i<j && j >=0) {   
        //     if(nums[i] + nums[j] == target){
        //         indx.push_back(i);
        //         indx.push_back(j);
        //         break;
        //     }

        //     else{
        //         i++;
        //     }

        //     if(i == j){
        //         i = 0;
        //         j--;
        //     }
            
        // }
        return {};        
    }
};