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
    bool isBalanced(TreeNode* root) {
        
        if (root == NULL) return true;

        int height = getHeight(root);

        if (bad_tree_found) return false;

        return true;
    }

    int getHeight(TreeNode* node) {
        if (node == NULL) return 0;

        int lheight, rheight;
        lheight = getHeight(node->left);
        rheight = getHeight(node->right);

        if (abs(lheight - rheight) > 1) bad_tree_found = true;

        return max(lheight, rheight) + 1;
    }

private:
    bool bad_tree_found;
};
