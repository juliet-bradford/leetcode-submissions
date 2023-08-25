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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        if (list1 == NULL && list2 == NULL) return NULL;
        if (list1 == NULL) return list2;
        if (list2 == NULL) return list1;

        ListNode* solution, * sol_temp, * temp1 = list1, * temp2 = list2;

        if (temp1->val < temp2->val) {
            solution = temp1;
            temp1 = temp1->next;
        }
        else {
            solution = temp2;
            temp2 = temp2->next;
        }
        sol_temp = solution;

        while (temp1 != NULL && temp2 != NULL) {
            if (temp1->val < temp2->val) {
                sol_temp->next = temp1;
                sol_temp = sol_temp->next;
                temp1 = temp1->next;
            } 
            else {
                sol_temp->next = temp2;
                sol_temp = sol_temp->next;
                temp2 = temp2->next;
            }
        }
        if (temp1 != NULL)
            sol_temp->next = temp1;
        else 
            sol_temp->next = temp2;

        return solution;
    }
};
