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
    ListNode* mergeTwoLists(ListNode* linked1, ListNode* linked2) {
        ListNode* p1 = linked1;
        ListNode* p2 = linked2;
        ListNode* merged = new ListNode(-1);
        ListNode* p3 = merged;

        while (p1 != nullptr && p2 != nullptr) {
            if (p1->val < p2->val) {
                p3->next = p1;
                p1 = p1->next;
            } else {
                p3->next = p2;
                p2 = p2->next;
            }
            p3 = p3->next;
        }

        while (p1 != nullptr) {
            p3 -> next = p1;
            p1 = p1 -> next;
            p3 = p3 -> next;
        }

        while (p2 != nullptr) {
            p3 -> next = p2;
            p2 = p2 -> next;
            p3 = p3 -> next;
        }
    return merged->next;
    }
};
