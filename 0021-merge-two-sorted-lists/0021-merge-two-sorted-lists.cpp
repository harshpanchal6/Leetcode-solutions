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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == nullptr){
            return list2;
        }
        if(list2 == nullptr){
            return list1;
        }
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;
        ListNode* temp = new ListNode(0);
        ListNode* newlist = temp;
        while(temp1 && temp2){
            if(temp1->val <= temp2->val){
                newlist->next = temp1;
                temp1 = temp1->next;
            }
            else{
                newlist->next = temp2;
                temp2 = temp2->next;
            }
            newlist = newlist->next;
        }
        if(temp1){
            newlist->next = temp1;
            temp1 = temp1->next;
            newlist = newlist->next;
        }
        if(temp2){
            newlist->next = temp2;
            temp2 = temp2->next;
            newlist = newlist->next;
        }
        return temp->next;
    }
};