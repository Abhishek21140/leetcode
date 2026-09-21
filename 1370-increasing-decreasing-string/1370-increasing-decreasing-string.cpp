class Solution {
public:
    string sortString(string s) {
        int n = s.length();
        string ans = "";
        vector<int> count(26, 0);
        for (int i = 0; i < n; i++) {
            count[s[i] - 'a']++;
        }
        while (ans.size() < n) {
            for (int i = 0; i < 26; i++) {
                if (count[i] > 0) {
                    ans += 'a' + i;
                    count[i]--;
                }
            }
            for (int i = 25; i >= 0; i--) {
                if (count[i] > 0) {
                    ans += 'a' + i;
                    count[i]--;
                }
            }
        }
        return ans;
    }
};