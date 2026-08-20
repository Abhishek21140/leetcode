class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int num1,num2=0;
        vector<int> arr1,arr2;
        int n=nums.size();
        num1=nums[0];
        num2=nums[1];
        arr1.push_back(num1);
        arr2.push_back(num2);
        for(int i=2;i<n;i++){
            if(num1>num2){
                arr1.push_back(nums[i]);
                num1=nums[i];
            }else{
                arr2.push_back(nums[i]);
                num2=nums[i];
            }
        }
        vector<int> result;
        for(int i=0;i<arr1.size();i++){
            result.push_back(arr1[i]);
        }
        for(int i=0;i<arr2.size();i++){
            result.push_back(arr2[i]);
        }
        return result;
    }
};