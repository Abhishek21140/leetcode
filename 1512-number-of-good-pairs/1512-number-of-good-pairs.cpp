class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> m;
        int n=nums.size();
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        int ans=0;
        for (auto it = m.begin(); it != m.end(); it++) {
            int t=it->second;
            ans+=t*(t-1)/2;
        }
        return ans;
    }
};