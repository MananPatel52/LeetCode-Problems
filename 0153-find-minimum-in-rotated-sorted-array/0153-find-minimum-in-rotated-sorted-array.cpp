class Solution {
public:
    int findMin(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums[0];
        // for(int i = 1; i<nums.size(); i++){
        //     if(nums[i-1] < nums[i]){
        //         return nums[i-1];
        //     }
        //     else{
        //         i++;
        //     }
        // }
        // return 0;
    }
};