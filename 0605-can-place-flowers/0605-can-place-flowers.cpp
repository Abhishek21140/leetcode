class Solution {
public:
    bool canPlaceFlowers(vector<int>& bed, int n) {
        int m=bed.size();

        for(int i=0;i<m;i++){
            bool left = ((i == 0) || bed[i-1] == 0);
            bool right = ((i == m-1) || bed[i+1] == 0);
            if(bed[i] == 0 && left && right){
                bed[i]=1;
                n--;
            }
        }
        if(n<=0){
            return true;
        }
        return false;
    }
};