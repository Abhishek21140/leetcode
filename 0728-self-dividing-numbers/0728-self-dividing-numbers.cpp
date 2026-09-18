class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for (int i = left; i <= right; i++) {
            bool check = true;
            int num = i;
            while (num > 0) {
                int dig = num % 10;
                num = num / 10;
                if (dig == 0) {
                    check = false;
                    break;
                }
                if (i % dig != 0) {
                    check = false;
                }
            }
            if (check) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};