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
ListNode* Solution::reorderList(ListNode* A) {
    int len = 0,l;
    ListNode *temp = A, *curr ,*t,*tt;
    while(temp)
    {
        temp = temp->next;
        len++;
    }
    l = len;
    if(len < 3)
        return A;
    len = len/2+1;
    temp = A;
    l  = l - len;
    for(int i = 0; i < len-1; i++)
        temp = temp->next;
    t = temp->next;
    temp->next =  NULL;
    temp = reverse(t);
    curr=A; // temp nn
    for(int i = 0; i < l; i++  )
    {
        t = curr->next;
        tt = temp->next;
        curr->next = temp;
        temp->next = t;
        curr = t;
        temp = tt;
    }
    return A;
    
}
