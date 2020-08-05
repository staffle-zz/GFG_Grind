struct Node* reverseList(struct Node *head)
{
    if(head==NULL) return head;
    
    struct Node *cur = head , *nxt = head->next , *prv = NULL;
    while(cur!=NULL){
        nxt = cur->next;
        cur->next = prv;
        prv = cur;
        cur = nxt;

    }
    return prv;
}
