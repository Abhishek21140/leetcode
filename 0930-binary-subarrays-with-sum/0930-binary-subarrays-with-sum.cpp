class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int> m;
        int presum=0;
        int curr=0;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            m[presum]++;
            presum+=nums[i];
            if(m.find(presum-goal)!=m.end()){
                ans+=m[presum-goal];
            }
        }
        return ans;
    }
};