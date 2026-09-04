class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        int maxn=INT_MIN;
        for(int i=0;i<n;i++){
            maxn=max(maxn,nums[i]);
            int minn=INT_MAX;
            for(int j=i;j<n;j++){
                minn=min(minn,nums[j]);
            }
            int idx=maxn-minn;
            if(idx<=k){
                return i;
            }
        }
        return -1;
    }
};