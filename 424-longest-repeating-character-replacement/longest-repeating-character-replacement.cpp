class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0,ans=0,maxf=0;
        vector<int>f(26,0);
        for(int i=0;i<s.size();i++){
            f[s[i]-'A']++;
            maxf=max(maxf,f[s[i]-'A']);
            while((i-l+1)-maxf>k){
                f[s[l]-'A']--;
                l++;
            }
            ans=max(ans,i-l+1);
        }
        return ans;
    }
};