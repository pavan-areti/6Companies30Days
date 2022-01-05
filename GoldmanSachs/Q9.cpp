//problem link : https://practice.geeksforgeeks.org/problems/number-following-a-pattern3126/1#

class Solution{   
public:
    string printMinNumberForPattern(string S){
        int n = S.size();
        stack<int> stk;
        string ans = "";
        for(int k=1;k<=n+1;k++){
            stk.push(k);
            if(S[k-1]=='D'){
                continue;
            }
            else{
                while(!stk.empty()){
                ans = ans+to_string(stk.top());
                stk.pop();
                }
            }
        }
        
        return ans;
    }
};
