class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int c=nums[0];
        int maxS=nums[0];
        for (int i=1;i<nums.size();i++) {
            c=max(nums[i],c+nums[i]);
            maxS=max(maxS,c);
        }
        return maxS;
    }
};