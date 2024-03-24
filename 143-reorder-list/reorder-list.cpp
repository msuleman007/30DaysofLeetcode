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
    void reorderList(ListNode* head) {
        if (!head || !head->next || !head->next->next) {
            return;
        }

        ListNode *slow = head, *fast = head;
        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* pre = nullptr,*curr = slow ->next,*next = nullptr;
        slow->next = nullptr;
        while(curr){
            next = curr -> next;
            curr -> next = pre;
            pre = curr;
            curr = next;
        }

        ListNode* first = head;
        ListNode* second = pre;
        while(second){
            ListNode* temp1 = first -> next;
            ListNode* temp2 = second -> next;
            first -> next = second;
            second -> next = temp1;
            first = temp1;
            second = temp2;
        }
    }
};