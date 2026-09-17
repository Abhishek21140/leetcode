class Solution {
public:
    int findComplement(int num) {
        int temp = num;
        int mask = 0;
        int i = 0;
        while (temp > 0) {
            mask = mask | (1 << i);
            temp = temp >> 1;
            i++;
        }
        
        return num ^ mask;
    }
};