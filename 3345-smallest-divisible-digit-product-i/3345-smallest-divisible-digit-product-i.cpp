class Solution {
public:
    int smallestNumber(int n, int t) {
        int num=0;
        for(int i=n;i<n+11;i++){
            int p=1;
            num=i;
            while(num>0){
                int dig=num%10;
                num=num/10;
                p=p*dig;
            }
            if(p==0) return i;
            if(p%t==0 && p>=t){
                return i;
            }
        }
        return -1;
        
    }
};