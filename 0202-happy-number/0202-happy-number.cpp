class Solution {
public:
    bool isHappy(int n) {
    unordered_set<int> s;

    while (n != 1) {
        int sum = 0;

        while (n != 0) {
            int dig = n % 10;
            sum += dig * dig;
            n /= 10;
        }

        if (s.find(sum) != s.end()) {
            return false;
        }

        s.insert(sum);
        n = sum;
    }

    return true;
}
};