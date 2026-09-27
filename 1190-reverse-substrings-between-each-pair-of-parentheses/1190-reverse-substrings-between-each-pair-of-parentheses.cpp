class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> sk;
        string ans = "";

        for (int i = 0; i < s.length(); i++) {

            if (s[i] == '(') {
                sk.push(ans.length());
            }

            else if (s[i] == ')') {
                int st = sk.top();
                sk.pop();

                reverse(ans.begin() + st, ans.end());
            }

            else {
                ans += s[i];
            }
        }

        return ans;
    }
};