class Solution {
public:
    long long sumAndMultiply(int n) {
        long long x=0;
        int hund=1;
        while(n>0){
            int dig=n%10;
            n=n/10;
            dig=dig*hund;
            if(dig!=0){
                x+=dig;
                hund=hund*10;
            }

        }
        int sum=0;
        long long y=x;
        hund=1;
        while(y>0){
            int dig=y%10;
            y=y/10;
            sum+=dig;


        }
        return x*sum;

    }
};