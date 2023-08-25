/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int goodNodes(TreeNode* root) {
        
        if (root == NULL) return 0;

        if (max_nums_stack.empty() || root->val >= max_nums_stack.top())
            max_nums_stack.push(root->val);

        int lgood, rgood, good;

        lgood = goodNodes(root->left);
        rgood = goodNodes(root->right);

        if (root->val < max_nums_stack.top()) {
            good = 0;
        }
        else {
            good = 1;
            max_nums_stack.pop();
        }

        return lgood + rgood + good;
    }

private:
    stack<int> max_nums_stack;
};
