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
    bool isMirror(TreeNode* a,TreeNode* b)
    {
        if(a==NULL && b==NULL) return true;
        else if(a==NULL || b==NULL) return false;
        if(a->left!=NULL && b->right!=NULL && a->left->val!=b->right->val) return false;
        if(b->left!=NULL && a->right!=NULL && b->left->val!=a->right->val) return false;
        return isMirror(a->left,b->right) && isMirror(a->right,b->left);
    }
    bool isSymmetric(TreeNode* root) 
    {
        return isMirror(root,root);
    }
};