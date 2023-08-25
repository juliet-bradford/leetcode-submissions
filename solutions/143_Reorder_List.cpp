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
        ListNode* it = head;
        while (it->next != NULL) {

            ListNode* temp = it, * prev_temp;
            while (temp->next != NULL) {
                prev_temp = temp;
                temp = temp->next;
            }
            if (it->next == temp) break;
            temp->next = it->next;
            it->next = temp;
            prev_temp->next = NULL;
            it = it->next->next;
        }
    }
};
