class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> freq;
        int count = -1;
        for(int num:arr){
            freq[num]++;
        }
        for(auto i:freq){
            if(i.first == i.second){
                count = max(count, i.first);
            }
        }
        return count;
    }
};