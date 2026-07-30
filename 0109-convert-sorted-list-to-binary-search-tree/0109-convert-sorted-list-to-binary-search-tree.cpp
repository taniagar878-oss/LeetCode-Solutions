/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    TreeNode* BuildTree(int start, int end, vector<int>&nums)
    {
        if(start>end) return NULL;
        
        int mid=start+(end-start)/2;
        TreeNode* root=new TreeNode(nums[mid]);
        root->left=BuildTree(start,mid-1,nums);
        root->right=BuildTree(mid+1,end,nums);
        return root;
    }
    TreeNode* sortedListToBST(ListNode* head) 
    {
        if(head==NULL) return NULL;
        ListNode* temp=head;
        vector<int>nums;
        while(temp!=NULL)
        {
            nums.push_back(temp->val);
            temp=temp->next;
        }
         return BuildTree(0,nums.size()-1,nums);
    }
};