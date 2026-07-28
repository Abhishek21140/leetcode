class Solution {
public:
    int calPoints(vector<string>& op) {
        stack<int> s;
        int n=op.size();
        for(int i=0;i<n;i++){
            if(op[i]=="+"){
                int d1=s.top();
                s.pop();
                int d2=s.top();
                s.push(d1);
                s.push(d1+d2);
            }
            else if(op[i]=="D"){
                int d1=s.top();
                s.push(2*d1);
            }
            else if(op[i]=="C"){
                s.pop();
            }
            else{
                s.push(stoi(op[i]));
            }
        }
        int sum=0;
        while(!s.empty()){
            sum+=s.top();
            s.pop();
        }
        return sum;
    }
};