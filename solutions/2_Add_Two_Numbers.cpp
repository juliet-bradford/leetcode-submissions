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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        if (l1 == NULL && l2 == NULL) return NULL;

        ListNode* solution = new ListNode(), * sol_temp, * t1 = l1, * t2 = l2;
        sol_temp = solution;
        int carry = 0;

        if (t1 != NULL) {
            sol_temp->val = t1->val;
            t1 = t1->next;
        }
        if (t2 != NULL) {
            if (sol_temp->val + t2->val > 9) carry = 1;
            sol_temp->val = (sol_temp->val + t2->val) % 10;
            t2 = t2->next;
        }

        while (t1 != NULL && t2 != NULL) {
            sol_temp->next = new ListNode((t1->val + t2->val + carry) % 10);
            if (t1->val + t2->val + carry > 9) carry = 1;
            else carry = 0;
            sol_temp = sol_temp->next;
            t1 = t1->next;
            t2 = t2->next;
        }

        while (t1 != NULL) {
            sol_temp->next = new ListNode((t1->val + carry) % 10);
            if (t1->val + carry > 9) carry = 1;
            else carry = 0;
            sol_temp = sol_temp->next;
            t1 = t1->next;
        }
        while (t2 != NULL) {
            sol_temp->next = new ListNode((t2->val + carry) % 10);
            if (t2->val + carry > 9) carry = 1;
            else carry = 0;
            sol_temp = sol_temp->next;
            t2 = t2->next;
        }

        if (carry == 1) sol_temp->next = new ListNode(1);

        return solution;
    }
};
