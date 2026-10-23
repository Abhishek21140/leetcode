class Solution {
public:
    string thousandSeparator(int n) {
        if (n == 0)
            return "0";
        string ans;
        int no = 0;
        int num = n;
        while (num > 0) {
            int dig = num % 10;
            num = num / 10;
            no++;
            ans += to_string(dig);
            if (no % 3 == 0 && num > 0) { 
                ans += '.';
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};