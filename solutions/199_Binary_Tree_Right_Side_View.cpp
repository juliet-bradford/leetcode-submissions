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
    vector<int> rightSideView(TreeNode* root) {
        
        rightSideView_rec(root, 0);
        return solution;
    }

    void rightSideView_rec(TreeNode* root, int depth) {

        if (root == NULL) return ;

        if (solution.size() == depth)
            solution.push_back(root->val);

        
        rightSideView_rec(root->right, depth + 1);
        rightSideView_rec(root->left, depth + 1);
    }

private:
    vector<int> solution;
};
