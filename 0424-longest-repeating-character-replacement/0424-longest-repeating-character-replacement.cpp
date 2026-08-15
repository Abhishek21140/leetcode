class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.length();
        int left=0;
        int right=0;
        int ans=INT_MIN;
        int maxf=0;
        vector<int> freq(26,0);
        for(int right=0;right<n;right++){
            freq[s[right]-'A']++;
            maxf=max(freq[s[right]-'A'],maxf);
            while((right-left+1)-maxf>k){
                freq[s[left]-'A']--;
                left++;
            }
            ans=right-left+1;
        }
        return ans;
    }
};