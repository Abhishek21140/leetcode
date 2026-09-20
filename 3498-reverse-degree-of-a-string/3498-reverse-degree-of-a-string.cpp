class Solution {
public:
    int reverseDegree(string s) {
        vector<int> reverse(26, 0);
        int rank = 26;
        for (int i = 0; i < 26; i++) {
            reverse[i] = rank;
            rank--;
        }
        int ans = 0;
        for (int i = 0; i < s.length(); i++) {
            ans = ans + (reverse[s[i] - 'a'] * (i + 1));
        }
        return ans;
    }
};