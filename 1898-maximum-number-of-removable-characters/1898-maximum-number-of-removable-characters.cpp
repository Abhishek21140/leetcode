class Solution {
public:
    bool possible(string s, string p, vector<int>& removable, int k) {
        vector<bool> removed(s.size(), false);

        for (int i = 0; i < k; i++) {
            removed[removable[i]] = true;
        }

        int j = 0;

        for (int i = 0; i < s.size(); i++) {
            if (!removed[i] && s[i] == p[j]) {
                j++;

                if (j == p.size())
                    return true;
            }
        }

        return false;
    }

    int maximumRemovals(string s, string p, vector<int>& removable) {
        int low = 0;
        int high = removable.size();
        int ans = 0;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (possible(s, p, removable, mid)) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return ans;
    }
};