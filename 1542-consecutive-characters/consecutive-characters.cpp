class Solution {
public:
    int maxPower(string s) {
        if (s.size()<=1)
            return s.size();
        int max_len=1,len=1;
        for (int i=1;i<s.size();i++) {
            if(s[i-1]==s[i]){
                len++;
                max_len=max(max_len, len);
            } else {
                len=1;
            }
        }
        return max_len;
    }
};