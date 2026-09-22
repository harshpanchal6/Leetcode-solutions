/*
Definition of singly linked list:
struct ListNode
{
    int val;
    ListNode *next;
    ListNode *random;
    ListNode()
    {
        val = 0;
        next = NULL;
        random = NULL;
    }
    ListNode(int data1)
    {
        val = data1;
        next = NULL;
        random = NULL;
    }
    ListNode(int data1, ListNode *next1, ListNode* r)
    {
        val = data1;
        next = next1;
        random = r;
    }
};
*/

class Solution {
private:
    void addNewCopyInBetween(Node* head){
        Node* temp = head;
        while(temp){
            Node* copyNode = new Node(temp->val);
            copyNode->next = temp->next;
            temp->next = copyNode;
            temp = temp->next->next;
        }
    }

    void connectRandomPointer(Node* head){
        Node* temp = head;

        while(temp){
            Node* copyNode = temp->next;

            if(temp->random){
                copyNode->random = temp->random->next;
            }
            else{
                copyNode->random = NULL;
            }

            temp = temp->next->next;
        }
    }

    Node* getCopiedList(Node* head){
        Node* dummy = new Node(-1);

        Node* temp = head;
        Node* res = dummy;

        while(temp){
            res->next = temp->next;
            res = res->next;

            temp->next = temp->next->next;
            temp = temp->next;
        }

        return dummy->next;
    }
public:
    Node* copyRandomList(Node* head) {
        addNewCopyInBetween(head);
        connectRandomPointer(head);
        return getCopiedList(head);
    }
};