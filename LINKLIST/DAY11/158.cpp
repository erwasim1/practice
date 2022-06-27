
    Node*curr=head;
    if(curr==NULL or curr->next==NULL)return head;
    
    while(curr->next!=NULL){
        curr=curr->next;
        
        head=curr;
        
        curr->next=curr->prev;
        curr->prev=NULL;
        curr=curr->next;
        
        while(curr->prev!=NULL){
            Node*temp=curr->next;
            curr->next=curr->prev;
            curr->prev=temp;
            curr=curr->next;
        }
        curr->prev=curr->next;
        curr->next=NULL;
        return head;