// question link : https://practice.geeksforgeeks.org/problems/phone-directory4628/1/#


struct node{
    vector<string> strs;
    node *arr[26];
    node(){
      for(int i=0;i<26;i++){
          this->arr[i]=NULL;
      }
    }
};

void add(node *root,string s){
    node *temp = root;
    int n = s.size();
    for(int i=0;i<n;i++){
        if(temp->arr[s[i]-'a']==NULL){
            temp->arr[s[i]-'a'] = new node();
        }
        temp = temp->arr[s[i]-'a'];
        temp->strs.push_back(s);
    }
}

vector<string> find(node *root,string s){
    node *temp = root;
    int n = s.size();
    for(int i=0;i<n;i++){
        if(temp->arr[s[i]-'a']==NULL){
            return {"0"}; 
        }
        temp = temp->arr[s[i]-'a'];
    }
    if(temp)return temp->strs;
}
class Solution{
public:
    vector<vector<string>> displayContacts(int n, string contact[], string s)
    {   node * root = new node();
         set<string> se;
        for(int i=0;i<n;i++){
            se.insert(contact[i]);
        }
        for(auto &it:se){
            add(root,it);
        }
        vector<vector<string>> ans;
        for(int i=0;i<s.size();i++){
            vector<string> temp = find(root,s.substr(0,i+1));
            ans.push_back(temp);
        }
        return ans;
    }
};
