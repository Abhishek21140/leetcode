class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        int rank[26];
        for (int i = 0; i < 26; i++) {
            rank[order[i] - 'a'] = i;
        }

        for (int i = 0; i + 1 < words.size(); i++) {
            const string& a = words[i];
            const string& b = words[i + 1];

            int j = 0;
            int m = min(a.size(), b.size());
            while (j < m && a[j] == b[j]) j++;
            if (j == m) {
                if (a.size() > b.size()) return false;
            } else if (rank[a[j] - 'a'] > rank[b[j] - 'a']) {
                return false;
            }
        }
        return true;
    }
};