//https://leetcode.com/problems/odd-even-linked-list/submissions/1528559752/?envType=study-plan-v2&envId=leetcode-75
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
   
    void insertAtTail(ListNode* &head,int data){
       
        
        ListNode* k=new ListNode(data);
         if (!head) {
            head = k;
            return;
        }
         ListNode* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next=k;



    }
    ListNode* oddEvenList(ListNode* head) {
        ListNode* l=head;
        int cnt=1;
        ListNode* head2=NULL;
        while(l!=NULL){
            if(cnt%2!=0){
                insertAtTail(head2,l->val);
            }
            cnt++;
            l=l->next;
        }
        ListNode* h=head;
        int n=1;
        while(h!=NULL){
            if(n%2==0){
                insertAtTail(head2,h->val);
            }
            n++;
            h=h->next;
        }
        return head2;

     
    }
};