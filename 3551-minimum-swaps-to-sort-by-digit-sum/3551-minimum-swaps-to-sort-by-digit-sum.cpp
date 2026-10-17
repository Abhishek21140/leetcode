class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        vector<array<int, 3>> v(n);

        for (int i = 0; i < n; i++) {
            int num = nums[i], sum = 0;
            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
            v[i] = {sum, nums[i], i};
        }

        sort(v.begin(), v.end());

        vector<bool> vis(n, false);
        int swaps = 0;

        for (int i = 0; i < n; i++) {
            if (vis[i] || v[i][2] == i)
                continue;

            int j = i, len = 0;
            while (!vis[j]) {
                vis[j] = true;
                j = v[j][2];
                len++;
            }
            swaps += len - 1;
        }
        return swaps;
    }
};