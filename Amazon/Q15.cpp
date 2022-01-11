// question link : https://practice.geeksforgeeks.org/problems/delete-n-nodes-after-m-nodes-of-a-linked-list/1/#


class Solution
{
    public:
    void help(struct Node  *head, int m, int n){
        int M = m , N = n; 
         M--;
        Node *temp = head;
        while(M--){
            if(!temp)return;
            temp=temp->next;
        }
        
        if(temp!=NULL){
            Node *temp2 = temp->next;
        while(N--){
            if(!temp2)break;
            temp2=temp2->next;
        }
        temp->next = temp2;
        help(temp2,m,n);
        }
    }
    void linkdelete(struct Node  *head, int M, int N)
    { 
        help(head,M,N);
    }
};
