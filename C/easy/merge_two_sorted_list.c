/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
/**************************************************************Method 1**************************************************************/
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* l1_current = l1;
    struct ListNode* l2_current = l2;
    struct ListNode* ret = 0;
    struct ListNode* ret_head = 0;
    
    if(l1==NULL)return l2;
    if(l2==NULL)return l1;
    if(l2&&l1==NULL)return NULL;
    
    
    /*find first node of new list*/
    if(l1_current->val<=l2_current->val)
    {
        ret = l1_current;
        l1_current = l1_current->next;
    }
    else
    {
        ret = l2_current;
        l2_current = l2_current->next;
    }
    ret_head = ret;
    
    while(l1_current!=NULL&&l2_current!=NULL)
    {
        if(l1_current->val<=l2_current->val)
        {
            ret->next = l1_current;
            ret = ret->next;
            l1_current = l1_current->next;
        }
        else
        {
            ret->next = l2_current;
            ret = ret->next;
            l2_current = l2_current->next;
        }
    }
    if(l1_current!=NULL)ret->next = l1_current;
    if(l2_current!=NULL)ret->next = l2_current;
    
    return ret_head;
}
/**************************************************************Method 1**************************************************************/

/**************************************************************Method 2**************************************************************/
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    if(!l1 || !l2){
        return !l1 ? l2 : l1;
    }

    struct ListNode* result;
    if(l1->val > l2->val){
        result = l2;
        result->next = mergeTwoLists(l1,l2->next);
    }else{
        result = l1;
        result->next = mergeTwoLists(l1->next,l2);
    }
    return result;
}
/**************************************************************Method 2**************************************************************/
