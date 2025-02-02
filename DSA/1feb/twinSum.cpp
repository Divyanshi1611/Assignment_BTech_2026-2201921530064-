//https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list/?envType=study-plan-v2&envId=leetcode-75
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
    int pairSum(ListNode* head) {
        int sum=0;
        ListNode* front=head;
        ListNode* temp=head;
        stack<int> st;
        int n=0;
        int maxSum=0;
        while(temp!=NULL){
            n++;
            temp=temp->next;
        }
        int mid=n/2;
        cout<<mid;
        int cnt=0;
        while(front!=NULL){
            if(cnt>mid-1){ 
                sum+=front->val;
                sum+=st.top();
                st.pop();

                maxSum=max(sum,maxSum);
                sum=0;
            }
            else{
                st.push(front->val);
            }
            cnt++;
            
            front=front->next;
        }
        return maxSum;
    }
};