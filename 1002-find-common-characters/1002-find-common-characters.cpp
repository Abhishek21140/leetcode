class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
    vector<string> ans;
    int n = words.size();
    unordered_map<char,int> common;
    for (char c : words[0]) common[c]++;

    for (int i = 1; i < n; i++) {
        unordered_map<char,int> cur;
        for (char c : words[i]) cur[c]++;
        for (auto it = common.begin(); it != common.end(); ) {
            char c = it->first;
            it->second = min(it->second, cur.count(c) ? cur[c] : 0);
            if (it->second == 0) it = common.erase(it);
            else ++it;
        }
    }

    for (auto& u : common) {
        for (int k = 0; k < u.second; k++) {
            ans.push_back(string(1, u.first));
        }
    }
    return ans;
}
};