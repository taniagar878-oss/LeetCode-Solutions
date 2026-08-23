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
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) 
    {
        int n=lists.size();
        vector<int>val;
        for(int i=0; i<n; i++)
        {
            ListNode* temp=lists[i];
            while(temp!=NULL)
            {
                val.push_back(temp->val);
                temp=temp->next;
            }
        }
        sort(val.begin(),val.end());
        ListNode* dummy=new ListNode(0);
        ListNode* temp=dummy;
        for(int i : val)
        {
            temp->next=new ListNode(i);
            temp=temp->next;
        }
        return dummy->next;
    }
};