// question link : https://practice.geeksforgeeks.org/problems/count-number-of-subtrees-having-given-sum/1/


int countSubtreesWithSumXutil(Node* root, int X,int &count)
{
    if(root==NULL){
        return 0;
    }
    
    int leftsum=countSubtreesWithSumXutil(root->left,X,count);
    int rightsum=countSubtreesWithSumXutil(root->right,X,count);
    if((root->data+leftsum+rightsum)==X){
        count++;
    }
    return root->data+leftsum+rightsum;
}
int countSubtreesWithSumX(Node* root, int X)
{
    int count=0;
    countSubtreesWithSumXutil(root,X,count);
    return count;
}
