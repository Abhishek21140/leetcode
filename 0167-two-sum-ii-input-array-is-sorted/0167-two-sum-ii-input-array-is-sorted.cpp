class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans(2,0);
        int st = 0;
        int n = nums.size();
        int end = n - 1;
        while (st < end) {
            int sum=nums[st] + nums[end];
            if (sum== target) {
                ans[0]=st+1;
                ans[1]=end+1;
                return ans;
            } else if (sum > target) {
                end--;
            } else {
                st++;
            }
        }
        return ans;
    }
};