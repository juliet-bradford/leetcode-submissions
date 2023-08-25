/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        /* make a hashmap where the key is the node* in the original
         * list and the value is the corresponding node* in the new
         * list */

        if (head == NULL) return NULL;

        unordered_map<Node *, Node *> node_map;
        Node* solution = new Node(head->val), * sol_temp, * og_temp;
        sol_temp = solution;
        node_map[head] = sol_temp;
        og_temp = head->next;
        while (og_temp != NULL) {
            sol_temp->next = new Node(og_temp->val);
            sol_temp = sol_temp->next;
            node_map[og_temp] = sol_temp;
            og_temp = og_temp->next;
        }

        sol_temp = solution;
        og_temp = head;
        while (og_temp != NULL) {
            sol_temp->random = node_map[og_temp->random];
            sol_temp = sol_temp->next;
            og_temp = og_temp->next;
        }

        return solution;
    }
};
