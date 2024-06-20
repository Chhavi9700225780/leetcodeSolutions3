class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k ) {
        
         if(head == NULL){
            return NULL;
        }
        ListNode* next = NULL;
        ListNode* curr = head;
        ListNode* prev = NULL;
        int cnt = 0;

        ListNode* check = head;
        for (int i = 0; i < k; ++i) {
            if (!check) return head; // Not enough nodes left, return head
            check = check->next;
        }
        while(curr != NULL and cnt < k){
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
            cnt++;
        }
        if(next != NULL){
            head -> next = reverseKGroup(next, k);
        }
        return prev;
        
        
        
        
        
    }
};