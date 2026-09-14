class Solution {
public:
    bool buddyStrings(string s, string goal) {
        vector<int> si;
        if(s.length()!=goal.length()){
            return false;
        }
        if (s == goal) {
            vector<int> count(26, 0);
            for (char c : s)
                count[c - 'a']++;
            for (int c : count)
                if (c > 1)
                    return true;
            return false;
        }
        int n = s.length();
        for (int i = 0; i < n; i++) {
            if (s[i] != goal[i]) {
                si.push_back(i);
            }
        }
        if (si.size() == 0) {
            return true;
        }
        if (si.size() != 2) {
            return false;
        }
        swap(s[si[0]], s[si[1]]);
        if (s != goal) {
            return false;
        }
        return true;
        ;
    }
};