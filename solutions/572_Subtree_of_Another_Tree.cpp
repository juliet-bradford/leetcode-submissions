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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        
        if (root == NULL && subRoot == NULL) return true;
        else if (root == NULL || subRoot == NULL) return false;
        
        if (isNodeSubtree(root, subRoot)) return true;
        
        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }

    bool isNodeSubtree(TreeNode* node, TreeNode* subRoot) {
        if (node == NULL && subRoot == NULL) return true;
        else if (node == NULL || subRoot == NULL) return false;

        if (node->val == subRoot->val) 
            return isNodeSubtree(node->left, subRoot->left) && isNodeSubtree(node->right, subRoot->right);
        else return false;
    }
};
