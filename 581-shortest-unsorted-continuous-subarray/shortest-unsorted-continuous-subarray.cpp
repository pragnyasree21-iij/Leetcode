class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n=nums.size();
        int l=-1,r=-1;
        int mx=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]<mx){
                r=i;
            } 
            else{
                mx=nums[i];
            }  
        }
        int mn=nums[n-1];
        for(int i=n-2;i>=0;i--){
            if(nums[i]>mn){
                l=i;
            }
            else{
                mn=nums[i];
            }  
        }
        if(l==-1){
            return 0;
        }
        return r-l+1;
    }
};