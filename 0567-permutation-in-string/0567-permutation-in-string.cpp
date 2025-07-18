class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int len1 = s1.size();
        int len2 = s2.size();
        
        if (len1 > len2) return false; // s2 can't contain s1 if s1 is longer
        
        string sorted_s1 = s1;
        sort(sorted_s1.begin(), sorted_s1.end());
        
        for (int i = 0; i <= len2 - len1; i++) {
            string substring = s2.substr(i, len1);
            sort(substring.begin(), substring.end());
            
            if (substring == sorted_s1) {
                return true;
            }
        }
        
        return false;
    }
};