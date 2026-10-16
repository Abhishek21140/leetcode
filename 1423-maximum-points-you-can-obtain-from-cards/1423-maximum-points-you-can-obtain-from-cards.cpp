class Solution {
public:
    int maxScore(vector<int>& card, int k) {
    int n = card.size();
    int cur = 0;
    for (int i = 0; i < k; i++) cur += card[i]; 
    int ans = cur;

    for (int i = 0; i < k; i++) {
        cur -= card[k - 1 - i];   
        cur += card[n - 1 - i];   
        ans = max(ans, cur);
    }
    return ans;
}
};