class Solution {
public:
    bool isPerfectSquare(int num) {
    int l = 0;
    int r = num;

    while (l <= r) {
        int mid = l + (r - l) / 2;
        long long sq = 1LL * mid * mid;

        if (sq < num) {
            l = mid + 1;
        }
        else if (sq > num) {
            r = mid - 1;
        }
        else {
            return true;
        }
    }

    return false;
}
};