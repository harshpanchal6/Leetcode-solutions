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
    ListNode* reverseList(ListNode* head) {
        ListNode* temp = head;
        ListNode* prev = NULL;

        while(temp){
            ListNode* front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        return prev;
    }
    ListNode* findkthnode(ListNode* temp , int k){
       if(temp == nullptr){
            return nullptr;
       }
       for(int i=0 ; i<k-1 ; i++){
            if(temp == nullptr){
                return nullptr;
            }
            temp = temp->next;
       }
       return temp;
    }
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* prev = nullptr;

        while(temp){
            ListNode* kthnode = findkthnode(temp , k);
            if(kthnode == nullptr){
                if(prev != nullptr){
                    prev->next = temp;
                }
                return head;
            }
            ListNode* nextnode = kthnode->next;
            kthnode->next = nullptr;
            reverseList(temp);

            if(temp == head){
                head = kthnode;
            }
            else{
                prev->next = kthnode;
            }
            prev = temp;
            temp = nextnode;
        }
        return head;
    }
};