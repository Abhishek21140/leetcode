class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int left=0;
        int ans=0;
        int fz=0;
        for(int right = 0; right< n;right++){
            if(nums[right]==0){
                fz++;
            }
            while(fz>k){
                if(nums[left]==0){
                    fz--;
                }
                left++;
            }
            ans=max(ans,right-left+1);
        }
        return ans;
    }
};