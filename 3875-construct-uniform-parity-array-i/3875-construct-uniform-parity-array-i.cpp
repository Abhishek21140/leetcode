class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n=nums1.size();
        vector<int> nums2(n,-1);
        vector<int> nums3(n,-1);
        bool even=true,odd=true;
        for(int i=0;i<n;i++){
            if(nums1[i]%2==0){
                nums2[i]=nums1[i];
            }else{
                for(int j=0;j<n;j++){
                    if(j!=i){
                        int dig=abs(nums1[i]-nums1[j]);
                        if(dig%2 == 0){
                            nums2[i]=dig; 
                        }
                    }
                }
            }
        }
        for(int i=0;i<n;i++){
            if(nums2[i]==-1){
                even = false;
            }
        }
        for(int i=0;i<n;i++){
            if(nums1[i]%2!=0){
                nums3[i]=nums1[i];
            }else{
                for(int j=0;j<n;j++){
                    if(j!=i){
                        int dig=abs(nums1[i]-nums1[j]);
                        if(dig%2 != 0){
                            nums3[i]=dig; 
                        }
                    }
                }
            }
        }
        for(int i=0;i<n;i++){
            if(nums3[i]==-1){
                odd=false;
            }
        }
        return even || odd;
    }
};