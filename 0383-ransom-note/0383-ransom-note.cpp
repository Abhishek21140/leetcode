class Solution {
public:
    bool canConstruct(string ran, string mag) {
        unordered_map<char,int> m1;
        unordered_map<char,int> m2;
        int n=ran.length();
        int m=mag.length();
        for(int i=0;i<n;i++){
            m1[ran[i]]++;
        }
        for(int i=0;i<m;i++){
            m2[mag[i]]++;
        }
        for(int i=0;i<n;i++){
            if(m1[ran[i]]>m2[ran[i]]){
                return false;
            };
        }
        return true;
    }
};