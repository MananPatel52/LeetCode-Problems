class Solution {
public:
    bool isValid(string s) {
        string t="abc";
        int i=0;
        while(t.size()<s.size()) {
            if(t[i]!=s[i]) t.insert(i,"abc");
            else i++;
        }
        return t==s;
    }
};