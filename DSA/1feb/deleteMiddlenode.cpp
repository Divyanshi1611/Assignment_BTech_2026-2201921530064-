//https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/?envType=study-plan-v2&envId=leetcode-75
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
    ListNode* deleteMiddle(ListNode* head) {
        int len=0;
        ListNode* temp=head;
        ListNode* p=head;
        ListNode* t=head;
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        if(len==1){
            head=NULL;
        }
        if(len==2){
            head->next=NULL;
        }
        int mid=len/2;
        int cnt=0;
        while(cnt!=mid-1 && p!=NULL && t->next!=NULL){
            p=p->next;
            t=p->next;
            cnt++;


        }
        if(len==3){
                 p->next=p->next->next;
        }
        
        p->next=t->next;
        
        
        
        
        return head;
        
    }
};