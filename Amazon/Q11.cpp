// question link : https://leetcode.com/problems/serialize-and-deserialize-binary-tree/submissions/


class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string s="";
        if(!root)return s;
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            TreeNode * top = q.front();
            q.pop();
            
            if(top==NULL)s+="#,";
            else s+= (to_string(top->val)+',');
            
            if(top){
                q.push(top->left);
                q.push(top->right);
            }
        }
        
        return s;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data.size()==0 || data=="#")return NULL;
        stringstream ss(data);
        queue<TreeNode*> q;
        string s;
        getline(ss,s,',');
        TreeNode *root = new TreeNode(stoi(s));
        q.push(root);
        
        while(!q.empty()){
            TreeNode *top = q.front();
            q.pop();
            
            getline(ss,s,',');        
            if(s=="#"){
                top->left = NULL;
            }
            else{
                TreeNode * leftnode = new TreeNode(stoi(s));
                q.push(leftnode);
                top->left = leftnode;
            }
            
            getline(ss,s,',');        
            if(s=="#"){
                top->right = NULL;
            }
            else{
                TreeNode * rightnode = new TreeNode(stoi(s));
                q.push(rightnode);
                top->right = rightnode;
            }          
        }
        
        return root;
    }
};
