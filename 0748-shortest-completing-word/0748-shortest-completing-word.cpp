class Solution {
public:
    string shortestCompletingWord(string plate, vector<string>& words) {
        vector<int> freq(26, 0);
        string ans;
        for (int i = 0; i < plate.length(); i++) {
            if (!isalpha(plate[i])) {
                continue;
            }
            freq[tolower(plate[i]) - 'a']++;
        }
        for (int i = 0; i < words.size(); i++) {
            vector<int> f(26, 0);
            bool t = true;
            for (int j = 0; j < words[i].length(); j++) {
                f[words[i][j] - 'a']++;
            }
            for (int k = 0; k < 26; k++) {
                if (freq[k] > f[k]) {
                    t = false;
                }
            }
            if (t) {
                if (ans.empty() || words[i].length() < ans.length()) {

                    ans = words[i];
                }
            }
        }
        return ans;
    }
};