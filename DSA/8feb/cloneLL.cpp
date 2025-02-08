//https://leetcode.com/problems/copy-list-with-random-pointer/description/
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
    public:
        void insertCopyInBetween(Node* head) {
            Node* temp = head;
            while (temp) {
                Node* nextElement = temp->next;
                Node* copy = new Node(temp->val);
                copy->next = nextElement;
                temp->next = copy;
                temp = nextElement;
            }
        }
    
        void connectRandomPointers(Node* head) {
            Node* temp = head;
            while (temp) {
                Node* copyNode = temp->next;
                copyNode->random = temp->random ? temp->random->next : NULL;
                temp = temp->next->next;
            }
        }
    
        Node* separateLists(Node* head) {
            Node* temp = head;
            Node* dummy = new Node(0);
            Node* copyHead = dummy;
            while (temp) {
                copyHead->next = temp->next;
                temp->next = temp->next->next;
                temp = temp->next;
                copyHead = copyHead->next;
            }
            return dummy->next;
        }
    
        Node* copyRandomList(Node* head) {
            if (!head) return NULL;
            insertCopyInBetween(head);
            connectRandomPointers(head);
            return separateLists(head);
        }
    };
    