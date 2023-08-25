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
    vector<vector<int>> levelOrder(TreeNode* root) {       
        int depth = 0;
        levelOrder_rec(root, depth);

        return solution;
    }

    void levelOrder_rec(TreeNode* root, int depth) {
        if (root == NULL) return;

        if (solution.size() <= depth) 
            solution.push_back(vector<int>());
        
        solution[depth].push_back(root->val);
        levelOrder_rec(root->left, depth + 1);
        levelOrder_rec(root->right, depth + 1);
    }

private:
        vector<vector<int>> solution; 
};
