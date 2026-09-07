class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        int n=nums.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        vector<pair<int,int>> v(m.begin(),m.end());
        sort(v.begin(), v.end(), [](pair<int,int>& a, pair<int,int>& b) {
            return a.second > b.second;
        });
        for(int i=0;i<k;i++){
            ans.push_back(v[i].first);
        }
        return ans;
    }
};