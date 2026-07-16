class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        long long sum=0;
        long long mx=nums[0];
        int n=nums.size();
        vector<int> prefix(n,0);
        for(int i=0;i<nums.size();i++){
            mx=max((long long)nums[i],mx);
            prefix[i]=gcd((long long)nums[i],mx);
        }
        sort(prefix.begin(),prefix.end());
        int l=0;
        int r=n-1;
        while(l<r){
            sum+=gcd(prefix[l],prefix[r]);
            l++;
            r--;
        }
        return sum;
    }
};