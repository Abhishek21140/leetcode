class Solution {
public:
    int maxProduct(int n) {
        vector<int> dig;
        while(n>0){
            int d=n%10;
            n=n/10;
            dig.push_back(d);
        }
        int x=dig.size();
        int ans=INT_MIN;
        for(int i=0;i<x;i++){
            for(int j=i+1;j<x;j++){
                ans=max(ans,dig[i]*dig[j]);
            }
        }
        return ans;
    }
};