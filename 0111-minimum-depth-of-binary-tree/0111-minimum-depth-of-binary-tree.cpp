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
    void Minlen(int &len,int &minlen,TreeNode* root)
    {
        if(root==NULL) return;
        len++;
        if(root->left==NULL && root->right==NULL)
        {
            minlen=min(minlen,len);
        }
        else
        {
            Minlen(len,minlen,root->left);
            Minlen(len,minlen,root->right);
        }
        len--;
    }
    int minDepth(TreeNode* root) 
    {
        int len=0,minlen=INT_MAX;
        if(root==NULL) return 0;
        Minlen(len,minlen,root);
        return minlen;
    }
};