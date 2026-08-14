class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.length();
        int ans = INT_MIN;
        for (int i = 0; i < n; i++) {
            vector<int> freq(26, 0);
            string cq = "";
            for (int j = i; j < n; j++) {
                cq = cq + s[j];
                freq[s[j] - 'a']++;
                if (freq[s[j] - 'a'] > 2) {
                    break;
                }
                ans = max(ans, (int)cq.length());
            }
        }
        return ans;
    }
};