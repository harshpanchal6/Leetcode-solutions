class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* current = head;
        ListNode* forward = nullptr;

        while (current) {
            forward = current->next; 
            current->next = prev;      
            prev = current;            
            current = forward;        
        }

        return prev;
    }
};
