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
    void pathsum(vector<vector<int>>&ans, vector<int>path, TreeNode* root, int targetSum,int sum)
    {
        if(root->left==NULL && root->right==NULL && root->val+sum==targetSum)
        {
            path.push_back(root->val);
            ans.push_back(path);
            return;
        }
        else 
        {
            path.push_back(root->val);
            if(root->left) pathsum(ans,path,root->left,targetSum,sum+root->val);
            if(root->right) pathsum(ans,path,root->right,targetSum,sum+root->val);
        }
        return;
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) 
    {
        vector<vector<int>>ans;
        if(root==NULL) return ans;
        vector<int>path;
        pathsum(ans,path,root,targetSum,0);
        return ans;
    }
};