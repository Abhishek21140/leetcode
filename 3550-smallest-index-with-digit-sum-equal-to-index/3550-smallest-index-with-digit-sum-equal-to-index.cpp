class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int no = nums[i];
            int sum = 0;
            while (no > 0) {
                int dig = no % 10;
                no = no / 10;
                sum += dig;
            }
            if (sum == i) {
                return i;
            }
        }
        return -1;
    }
};