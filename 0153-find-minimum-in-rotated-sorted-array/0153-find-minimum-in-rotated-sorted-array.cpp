class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;
        int ans = INT_MAX;

        while(low<=high){
            int mid = (low + high)/2;
            if(nums[low] <= nums[mid]){
                ans = min(ans, nums[low]);
                low = mid+1;
            }
            else{
                ans = min(ans, nums[mid]);
                high = mid - 1;
            }
        }
        return ans;
        // sort(nums.begin(), nums.end());
        // return nums[0];
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