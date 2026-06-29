class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(), cost.end(), greater<int>());

int ans = 0;
int i = 0;

while (i < cost.size()) {
    ans += cost[i];              // first candy

    if (i + 1 < cost.size())
        ans += cost[i + 1];      // second candy

    // i + 2 is free

    i += 3;
}

return ans;
    }
};