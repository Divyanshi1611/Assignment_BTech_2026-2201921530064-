//https://leetcode.com/problems/rotate-list/submissions/1535989107/
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
        ListNode* rotateRight(ListNode* head, int k) {
            ListNode* tail=head;
            ListNode* temp=head;
            int len=1;
            if(!head || !head->next){
                return head;
    
            }
            while(tail->next!=NULL){
                len++;
                tail=tail->next;
    
            }
            if(k%len==0){
                return head;
            }
            k=k%len;
            int h =len-k;
            int cnt=1;
            while(h!=cnt && temp!=NULL){
                cnt++;
                temp=temp->next;
            }
            tail->next=head;
            head=temp->next;
            temp->next=NULL;
            return head;
                
            
        }
    };