// question link : https://practice.geeksforgeeks.org/problems/connect-nodes-at-same-level/1/#


class Solution
{
    public:
    //Function to connect nodes at same level.
    void connect(Node *root)
    {
      queue<Node *> q;
      q.push(root);
      
      while(!q.empty()){
          int s = q.size();
          while(s--){
              Node *top = q.front();
              q.pop();
              
              if(s!=0)top->nextRight = q.front();
              
              if(top->left){
                  q.push(top->left);
              }
              
              if(top->right){
                  q.push(top->right);
              }
          }
      }
    }    
      
};

