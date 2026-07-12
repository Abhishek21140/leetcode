class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n=arr.size();
        vector<int> copy=arr;
        unordered_map<int,int> m;
        sort(copy.begin(),copy.end());
        int rank=1;
        for(int i=0;i<n;i++){
            m[copy[i]]=rank;
            rank++;
            while(i<n-1&&copy[i]==copy[i+1]){
                i++;
            }
        }
        for(int i=0;i<n;i++){
            arr[i]=m[arr[i]];
        }
        return arr;
    }
};