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
        
        if (head->next == NULL) return NULL;

        ListNode* temp = head;
        int index = 1;
        while (temp->next != NULL) {
            ++index;
            temp = temp->next;
        }

        if (index == n) {
            head = head->next;
        }
        else {
            index -= n;

            temp = head;
            while (index != 1) {
                --index;
                temp = temp->next;
            }

            temp->next = temp->next->next;
        }

        return head;
    }
};
