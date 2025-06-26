class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char, int> freq;
        //    int hash[26] = {0};

        for (int i = 0; i < s.size(); i++) {
            char ch = s[i];
            freq[ch]++;
        }

        char most_freq_char;
        int max_freq = INT_MIN;
        for (char i = 'a'; i <= 'z'; i++) {
            if (freq[i] > max_freq) {
                max_freq = freq[i];
                most_freq_char = i;
            }
        }

        int index = 0;
        while (max_freq > 0 && index < s.size()) {
            s[index] = most_freq_char;
            max_freq--;
            index += 2;
        }

        if (max_freq != 0) {
            return "";
        }
        freq[most_freq_char] = 0;

        for (char i = 'a'; i <= 'z'; i++) {
            while (freq[i] > 0) {
                index = index >= s.size() ? 1 : index;
                s[index] = i;
                freq[i]--;
                index += 2;
            }
        }
        return s;
    }
};