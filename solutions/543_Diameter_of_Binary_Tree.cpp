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
    int diameterOfBinaryTree(TreeNode* root) {
        int height = heightOfBinaryTree(root);

        return max_diameter;
    }

    int heightOfBinaryTree(TreeNode* node) {
        
        if (node == NULL) return -1;
        
        int lheight, rheight;
        lheight = heightOfBinaryTree(node->left);
        rheight = heightOfBinaryTree(node->right);

        if (lheight + rheight + 2 > max_diameter) max_diameter = lheight + rheight + 2;

        return max(lheight, rheight) + 1;
    }

private:
    int max_diameter;
};
