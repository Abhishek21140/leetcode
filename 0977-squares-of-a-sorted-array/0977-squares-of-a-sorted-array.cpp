class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int z=nums[i];
            nums[i]=z*z;
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};