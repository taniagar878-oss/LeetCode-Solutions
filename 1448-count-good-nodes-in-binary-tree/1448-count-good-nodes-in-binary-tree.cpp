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
    void numofgood(TreeNode* root,int &good,int mymax)
    {
        if(root->val>=mymax)
        {
            good++;
            mymax=root->val;
        }
        if(root->left) numofgood(root->left,good,mymax);
        if(root->right) numofgood(root->right,good,mymax);
    }
    int goodNodes(TreeNode* root) 
    {
        if(root==NULL) return 0;
        int good=0;
        int mymax=INT_MIN;
        numofgood(root,good,mymax);
        return good;
    }
};