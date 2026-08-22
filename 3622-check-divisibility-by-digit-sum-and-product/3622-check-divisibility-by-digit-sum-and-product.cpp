class Solution {
public:
    bool checkDivisibility(int n) {
        int dsum=0;
        int dpro=1;
        int num=n;
        while(num>0){
            int dig=num%10;
            num=num/10;
            dsum+=dig;
            dpro*=dig;
        }
        int sum=dsum+dpro;
        return n%sum==0;
    }
};