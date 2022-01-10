// question link : https://practice.geeksforgeeks.org/problems/burning-tree/1/#


class Solution {
  public:
    int minTime(Node* root, int target) 
    {
        unordered_map<Node *,Node *> m;
        queue<Node *> q;
        queue<Node *> bq;
        m[root] = NULL;
        q.push(root);
        
        while(!q.empty()){
            int s = q.size();
            while(s--){
                Node *temp = q.front();
                if(temp->data==target){
                    bq.push(temp);
                }
                q.pop();
                
                if(temp->left){
                    m[temp->left] = temp;
                    q.push(temp->left);
                }
                if(temp->right){
                    m[temp->right] = temp;
                    q.push(temp->right);
                }
            }
        }
        int timer = 0;
        unordered_map<Node *,bool> um;
        while(!bq.empty()){
            int s = bq.size();
            while(s--){
                Node *top = bq.front();
                um[top]=true;
                bq.pop();
                
                if(m[top] && !um[m[top]]){
                    bq.push(m[top]);
                }
                if(top->left && !um[top->left]){
                    bq.push(top->left);
                }
                if(top->right && !um[top->right]){
                    bq.push(top->right);
                }
            }
            timer++;
        }
        return timer-1;
    }
};
