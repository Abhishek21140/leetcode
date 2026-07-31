class Solution {
public:
    int minimumPushes(string word) {
        map<char,int> mp;
        int n=word.length();
        int ans=0;
        int cnt=0;
        vector<int> f(26,0);
        for(int i=0;i<n;i++){
            mp[word[i]]++;
        }
        vector<pair<char, int>> v(mp.begin(), mp.end());

        sort(v.begin(), v.end(), [](pair<char, int> a, pair<char, int> b) {
            return a.second > b.second; 
        });
        for(auto p : v){
            ans+=(cnt/8+1)*p.second;
            cnt++;
        }
        return ans;
    }
};