class Solution {
public:
    int foc(vector<int> &nums,int target){
        int n=nums.size();
        int l=0;
        int r=n-1;
        int ans=-1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (nums[mid] == target) {
                ans=mid;
                r=mid-1;
            } else if (nums[mid] < target) {
                l = mid + 1;
            } else {
                r=mid-1;
            }
        }
        return ans;
    }
    int loc(vector<int> &nums,int target){
        int n=nums.size();
        int l=0;
        int r=n-1;
        int ans=-1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (nums[mid] == target) {
                ans=mid;
                l=mid+1;
            } else if (nums[mid] < target) {
                l = mid + 1;
            } else {
                r=mid-1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2, -1);
        ans[0]=foc(nums,target);
        ans[1]=loc(nums,target);
        return ans;
    }    
};