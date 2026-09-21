/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
private:
     ListNode* middleNode(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;
        fast = head->next->next;
        while(fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head == nullptr || head->next == nullptr){
            return  nullptr;
        }
        ListNode* middlenode = middleNode(head);
        middlenode->next = middlenode->next->next;
        return head;
    }
};