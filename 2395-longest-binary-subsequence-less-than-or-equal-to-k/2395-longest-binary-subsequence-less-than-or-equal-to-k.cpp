class Solution {
public:
    int longestSubsequence(string s, int k) {
        int zeros = count(s.begin(), s.end(), '0');
        int max_len = 0;
        int temp = k;
        while(temp>0){
            temp>>=1;
            max_len++;
        }
        if(max_len == 0) max_len = 1;
        if(max_len >= s.size()){
            return s.size();
        }
        string valid = s.substr(s.size()-max_len, max_len);
        int zeros_in = count(valid.begin(), valid.end(), '0');
        int num = 0;
        for(char c:valid){
            num = stoi(valid, nullptr, 2);
            if(num>k){
                return zeros + (max_len - 1) - zeros_in;
            }
        }
        return zeros + max_len - zeros_in;
    }
};













































// class Solution {
// public:
//     int longestSubsequence(string s, int k) {
//         int zeros = count(s.begin(), s.end(), '0');
//         int max_len = 0;
//         int temp = k;
        
//         while (temp > 0) {
//             temp >>= 1;
//             max_len++;
//         }
//         if (max_len == 0) max_len = 1; // Handle k=0 case
        
//         if (max_len >= s.size()) {
//             return s.size();
//         }
        
//         string candidate = s.substr(s.size() - max_len, max_len);
//         int num = 0;
//         int zeros_in_candidate = count(candidate.begin(), candidate.end(), '0');
//         for (char c : candidate) {
//             num = stoi(candidate, nullptr, 2);
//             if (num > k) {
//                 return zeros + (max_len - 1) - zeros_in_candidate;
//             }
//         }
//         return zeros + max_len - zeros_in_candidate;
//     }
// };