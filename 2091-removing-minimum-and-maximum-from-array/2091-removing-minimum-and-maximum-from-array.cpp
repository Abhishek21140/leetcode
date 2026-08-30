class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
    int n = nums.size();
    int mn = INT_MAX, mx = INT_MIN;
    int mnind = 0, mxind = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] < mn) { mn = nums[i]; mnind = i; }
        if (nums[i] > mx) { mx = nums[i]; mxind = i; }
    }
    int lo = min(mnind, mxind);
    int hi = max(mnind, mxind);
    
    int fromFront = hi + 1;                  
    int fromBack  = n - lo;              
    int both      = (lo + 1) + (n - hi);    
    
    return min({fromFront, fromBack, both});
}
};