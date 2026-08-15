class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c=0,ans=0;
        for(int num:nums){
            if(num==1){
                c++;
            }
            else{
                c=0;
            }
            ans=max(ans,c);
        }
        return ans;
    }
};