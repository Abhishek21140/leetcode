class Solution {
public:
    string reformat(string s) {
        string alpha = "", nums = "";
        for (char c : s) {
            if (isalpha(c))
                alpha += c;
            else
                nums += c;
        }

        if (abs((int)alpha.size() - (int)nums.size()) > 1)
            return "";

        if (nums.size() > alpha.size())
            swap(alpha, nums);

        string ans = "";
        for (int i = 0; i < alpha.size(); i++) {
            ans += alpha[i];
            if (i < nums.size())
                ans += nums[i];
        }
        return ans;
    }
};