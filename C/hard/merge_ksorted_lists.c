 struct ListNode {
     int val;
     struct ListNode *next;
 };

typedef struct ListNode list;

list * merge_two_lists(list *l1, list *l2){
  if(l2==NULL){
        return l1;
    }
    if(l1==NULL){
        return l2;
    }
    
    if(l1->val < l2->val){
        l1->next = merge_two_lists(l1->next, l2);
        return l1;
    }
    else{
        l2->next = merge_two_lists(l1, l2->next);
        return l2;
    }
}

list *merge(list* lists[], int start, int end){
  if(start>end){
    return NULL;
  }
  else if(start==end){
    return lists[start];
  }
  
  int middle = (start+end)/2;
  
  list *first = merge(lists, start, middle);
  list *second = merge(lists, middle+1, end);
  
  return merge_two_lists(first, second);
  
}

struct ListNode* mergeKLists(struct ListNode** lists, int listsSize) {
    return merge(lists, 0, listsSize-1);
}
