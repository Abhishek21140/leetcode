class Solution {
public:
    bool possible(vector<int>& weights, int days, int cap) {
    int usedDays = 1;
    int currWeight = 0;

    for (int i = 0; i < weights.size(); i++) {
        if (currWeight + weights[i] <= cap) {
            currWeight += weights[i];
        } else {
            usedDays++;
            currWeight = weights[i];
        }
    }

    return usedDays <= days;
}
    int shipWithinDays(vector<int>& weights, int days) {
    int low = *max_element(weights.begin(), weights.end());
    int high = accumulate(weights.begin(), weights.end(), 0);

    int ans = high;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (possible(weights, days, mid)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return ans;
}
};