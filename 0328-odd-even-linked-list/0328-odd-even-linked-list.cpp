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
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head == nullptr){
            return nullptr;
        }

        ListNode* l1 = new ListNode(0);
        ListNode* head1 = l1;
        ListNode* l2 = new ListNode(0);
        ListNode* head2 = l2;
        ListNode* temp = head;
        int cnt = 1;
        while(temp != nullptr){
            ListNode* newnode = new ListNode(temp->val);
            if(cnt%2 != 0){
                l1->next = newnode;
                l1 = l1->next;
            }
            else{
                l2->next = newnode;
                l2 = l2->next;
            }
            cnt++;
            temp = temp->next;
        }
        l1->next = head2->next;
        return head1->next;
    }
};