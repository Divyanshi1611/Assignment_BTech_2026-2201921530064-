//https://leetcode.com/problems/remove-linked-list-elements/submissions/1523594390/
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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* slow = dummy;
        ListNode* fast = head;

        while (fast != NULL) {
            if (fast->val == val) {
                slow->next = fast->next;
            } else {
                slow = slow->next;
            }
            fast = fast->next;
        }

        return dummy->next;
    }
};
