class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size();
        int ans = 0;
        sort(people.begin(),people.end());
        int st=0;
        int end=n-1;
        while(st<=end){
            if(people[st]+people[end]<=limit){
                ans++;
                st++;
                end--;

            }else{
                if(people[end]<=limit){
                    ans++;
                }
                end--;
            }
        }
        return ans;
    }
};