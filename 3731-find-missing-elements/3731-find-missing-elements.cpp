class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        unordered_set <int> st;
        int mn=INT_MAX;
        int mx=INT_MIN;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
            mn=min(mn,nums[i]);
            mx=max(mx,nums[i]);
        }
        for(int i=mn+1;i<mx;i++){
            if(!st.count(i)){
                ans.push_back(i);
            }
        }
        return ans;

    }
};