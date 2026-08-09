class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> st;
        int n=nums1.size();
        int m=nums2.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            st.insert(nums1[i]);
        }
        for(int i=0;i<m;i++){
            if(st.count(nums2[i])){
                ans.push_back(nums2[i]);
                st.erase(nums2[i]);
            }
        }
        return ans;
    }
};