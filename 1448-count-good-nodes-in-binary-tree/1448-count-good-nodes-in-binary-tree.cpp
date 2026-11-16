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
    void numofgood(TreeNode* root,stack<int>&s,int &good)
    {
        bool pushed=false;
        if(s.size()!=0 && root->val>=s.top())
        {
            good++;
            s.push(root->val);
            pushed=true;
        }
        if(root->left) numofgood(root->left,s,good);
        if(root->right) numofgood(root->right,s,good);
        if(pushed==true) s.pop();
    }
    int goodNodes(TreeNode* root) 
    {
        int good=0;
        stack<int>s;
        s.push(root->val);
        numofgood(root,s,good);
        return good;
    }
};