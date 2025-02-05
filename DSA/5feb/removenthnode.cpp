//https://leetcode.com/problems/remove-nth-node-from-end-of-list/submissions/1532205986/
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int cnt = 0;
        ListNode* temp = head;
        while (temp) {
            cnt++;
            temp = temp->next;
        }
        if (cnt == n) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }
        int point = cnt - n - 1;
        ListNode* f = head;
        for (int y = 0; y < point; y++) {
            f = f->next;
        }
        ListNode* nodeToDelete = f->next;
        f->next = f->next->next;
        delete nodeToDelete;
        return head;
    }
};
