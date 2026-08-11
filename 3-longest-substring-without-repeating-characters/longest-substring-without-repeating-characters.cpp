class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>ch;
        int st = 0;
        int l = 0;
        for(int end=0;end<s.length();end++) {
            while(ch.count(s[end])) {
                ch.erase(s[st]);
                st++;
            }
            ch.insert(s[end]);
            l = max(l, end - st + 1);
        }
        return l;
    }
};