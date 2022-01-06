//question link : https://practice.geeksforgeeks.org/problems/decode-the-string2444/1#

class Solution{
public:
    string decodedString(string st){
        stack<int> intstack;
        stack<string> s;
        
        for(int i=0;i<st.size();i++){
            if(st[i]-'0'>0 && st[i]-'0'<9){
                intstack.push(st[i]-'0');
            }
            else if(st[i]==']'){
                
                int count = intstack.top();
                intstack.pop();
                
                string temp = "";
                while(s.top()!="["){
                    temp = s.top()+temp;
                    s.pop();
                }
                if(s.top()=="[")s.pop();
                
                string reptemp="";
                while(count--){
                    reptemp = reptemp+temp;
                }
                s.push(reptemp);
            }
            else{
                string temp ="";
                temp+=st[i];
                s.push(temp);
            }
            
        }
        return s.top();
    }
};
