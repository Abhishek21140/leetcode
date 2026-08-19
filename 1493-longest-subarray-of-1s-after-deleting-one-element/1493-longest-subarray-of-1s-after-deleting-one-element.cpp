class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int co=0;
        int ans=0;
        for(int r=0;r<n;r++){
            if(nums[r]==0){
                co++;
            }
            while(co>1){
                if(nums[l]==0){
                    co--;
                }
                l++;
            }
            ans=max(ans,r-l);

        }
        return ans;
    }
};