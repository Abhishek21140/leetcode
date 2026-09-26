class Solution {
public:
    string evaluate(string s, vector<vector<string>>& know) {
    string ans = "";
    unordered_map<string, string> m;
    for (auto& k : know) m[k[0]] = k[1];

    int i = 0;
    while (i < s.length()) {
        if (s[i] == '(') {
            string curr = "";
            i++;
            while (s[i] != ')') {
                curr += s[i];
                i++;
            }
            i++;
            ans += (m.count(curr) ? m[curr] : "?");
        } else {
            ans += s[i];
            i++;
        }
    }
    return ans;
}
    
};
