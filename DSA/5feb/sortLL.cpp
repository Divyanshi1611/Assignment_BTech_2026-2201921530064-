//https://leetcode.com/problems/sort-list/description/
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
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = nullptr; // To track the node before middle
        while (fast != nullptr && fast->next != nullptr) {
            prev = slow; 
            slow = slow->next;
            fast = fast->next->next;
        }
        if (prev) prev->next = nullptr; // Properly break the list
        return slow;
    }

    ListNode* mergeTwoSortedLinkedLists(ListNode* list1, ListNode* list2) {
        ListNode* dummyNode = new ListNode(-1);
        ListNode* temp = dummyNode;
        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val <= list2->val) {
                temp->next = list1;
                list1 = list1->next;
            } else {
                temp->next = list2;
                list2 = list2->next;
            }
            temp = temp->next; 
        }
        if (list1 != nullptr) temp->next = list1;
        else temp->next = list2;
        return dummyNode->next;
    }

    ListNode* sortList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return head;
        
        ListNode* middle = middleNode(head);
        ListNode* left = sortList(head);
        ListNode* right = sortList(middle);
        
        return mergeTwoSortedLinkedLists(left, right);
    }
};
