class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy(-1);  // dummy head
        ListNode* tail = &dummy;

        ListNode* curr1 = list1;
        ListNode* curr2 = list2;

        while (curr1 != nullptr && curr2 != nullptr) {
            if (curr1->val <= curr2->val) {
                tail->next = curr1;
                curr1 = curr1->next;
            } else {
                tail->next = curr2;
                curr2 = curr2->next;
            }
            tail = tail->next;
        }

        // Attach remaining nodes
        if (curr1 != nullptr) tail->next = curr1;
        if (curr2 != nullptr) tail->next = curr2;

        return dummy.next;  // skip dummy
    }
};
