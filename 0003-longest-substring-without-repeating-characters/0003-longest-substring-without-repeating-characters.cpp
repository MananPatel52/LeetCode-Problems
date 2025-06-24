class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> sw;
        int left = 0, right = 0, maxLen = 0;

        while(right < s.length()){
            if(!sw.count(s[right])){
                sw.insert(s[right]);
                maxLen = max(maxLen, right - left + 1);
                right++;
            }
            else{
                sw.erase(s[left]);
                left++;
            }
        }
        return maxLen;
    }
};