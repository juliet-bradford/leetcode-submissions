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
    ListNode* reverseList(ListNode* head) {
        if (head == NULL) return NULL;
        ListNode* solution = new ListNode();
        ListNode* it = head;
        while (it->next != NULL) {
            ListNode* temp = solution->next;
            solution->next = new ListNode(it->val, temp);
            it = it->next;
        }
        solution->val = it->val;

        return solution;
    }
};
