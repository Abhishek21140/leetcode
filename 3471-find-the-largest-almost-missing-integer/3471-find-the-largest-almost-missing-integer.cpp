class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> m;

        for (int r = 0; r <= n - k; r++) {
            unordered_set<int> s;

            for (int i = 0; i < k; i++) {
                s.insert(nums[r + i]);
            }

            for (int x : s) {
                m[x]++;
            }
        }

        int ans = -1;

        for (auto it : m) {
            if (it.second == 1) {
                ans = max(ans, it.first);
            }
        }

        return ans;
    }
};