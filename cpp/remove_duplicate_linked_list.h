class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
		if(head == NULL) return head;
		ListNode *cur,*after,*del;	
		cur = head;
		while(1){
			if(cur->next == NULL) break;
			if(cur->val == cur->next->val){
				if(cur->next->next == NULL){
					del = cur->next;
					cur->next = NULL;
					delete del;
					break;
				} else {
					after = cur->next->next;
					del = cur->next;
					delete del;
					cur->next = after;
				}
				continue;	
			} 
			cur = cur->next;	
		}
		return head;	
	}
};

