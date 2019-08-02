/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* reverse(ListNode* head) 
    { 
        ListNode* current = head; 
        ListNode *prev = NULL, *next = NULL; 
  
        while (current != NULL) { 
            next = current->next; 
            current->next = prev; 
            prev = current; 
            current = next; 
        } 
        head = prev; 
        return head;
    } 
int Solution::lPalin(ListNode* A) {
    ListNode * t =  A;
    int l = 0,m;
    while(t)
    {
        l++;
        t=t->next;
    }
    m= ceil(l/2);
    t=A;
    for(int i =0; i < m; i++ )
        t = t->next;
    t=reverse(t);
    l/=2;
    for(int i = 0 ; i < l; i++ )
    {
        if(t->val == A->val)
            t=t->next,A=A->next;
        else
            return 0;
    }
    return 1;
    
    
}
