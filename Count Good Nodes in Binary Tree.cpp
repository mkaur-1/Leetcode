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
    int rec(struct TreeNode* root, int max_val) {
        if (!root)
            return 0;
        max_val = max(max_val, root->val);
        if (root->val >= max_val)
            return 1 + rec(root->right, max_val) + rec(root->left, max_val);
        else
            return rec(root->right, max_val) + rec(root->left, max_val);
    }
    
    int goodNodes(TreeNode* root) {
        if (!root) return 0;
        return rec(root, root->val);
    }
};
