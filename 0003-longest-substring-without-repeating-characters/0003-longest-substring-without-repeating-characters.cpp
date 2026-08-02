class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        string ans = "";
        int maxi = 0;

        for (char c : s) {
            if (st.count(c)) {
                while (ans[0] != c) {
                    st.erase(ans[0]);
                    ans.erase(0, 1);
                }
                st.erase(ans[0]);
                ans.erase(0, 1);
            }
            ans += c;
            st.insert(c);
            maxi = max(maxi, (int)ans.size());
        }

        return maxi;
    }
};