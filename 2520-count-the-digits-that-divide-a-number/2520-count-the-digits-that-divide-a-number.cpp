class Solution {
public:
    int countDigits(int num) {
        int n = num;
        int ans = 0;
        while (n > 0) {
            int dig = n % 10;
            n = n / 10;
            if (dig != 0) {
                if (num % dig == 0) {
                    ans++;
                }
            }
        }
        return ans;
    }
};