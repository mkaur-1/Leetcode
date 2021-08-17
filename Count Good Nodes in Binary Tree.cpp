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
 int treechild(TreeNode *root,int p)
    {
        if(root==NULL)
            return 0;
        if(p<=root->val)
            return 1 + treechild(root->right,max(p,root->val)) + treechild(root->left,max(p,root->val));
        else
            return treechild(root->right,max(p,root->val)) + treechild(root->left,max(p,root->val));
    }
    int goodNodes(TreeNode* root) {
        int count = 1;
        count = count + treechild(root->left,root->val) + treechild(root->right,root->val);
        return count ;
        
    }
};
