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
        ListNode* node  = new ListNode(0);
        node->next = head;
        ListNode* first = node;
        ListNode* second = node;

        for(int i = 0; i <= n;i++){
            if(first==nullptr){
                return nullptr;
            }
            first = first -> next;
        }

        while(first!=nullptr){
            first = first -> next;
            second = second->next;
        }

        ListNode* toDelete = second->next;
        second->next = second->next->next;
        delete toDelete;

        return node->next;
    }
};