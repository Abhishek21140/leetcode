class Solution {
public:
    bool ifpossible(vector<int> & position,int m,int min){
        int balls=1,lastb=position[0];
        for(int i=1;i<position.size();i++){
            if(position[i]-lastb>=min){
                balls++;
                lastb=position[i];
            }
            if(balls==m){
                return true;
            }
        }
        return false;

    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int balls=1,ans=-1;
        int n=position.size();
        int st=1,end=position[n-1]-position[0];
        while(st<=end){
            int mid=st+(end-st)/2;
            if(ifpossible(position,m,mid)){
                ans=mid;
                st=mid+1;
            }else{
                end=mid-1;
            }
        }
        return ans;
    }
};