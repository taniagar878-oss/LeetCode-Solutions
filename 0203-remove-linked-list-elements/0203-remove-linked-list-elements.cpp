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
    ListNode* removeElements(ListNode* head, int val) 
    {
        if(head==NULL) return head;

        ListNode* temp=head;
        while(temp!=NULL && temp->val==val)
        {
            temp=temp->next;
        }
        if(temp==NULL || temp->next==NULL) return temp;
        head=temp;
        ListNode* cur=head->next;
        while(cur!=NULL)
        {
           while(cur!=NULL && cur->val==val) cur=cur->next;
           temp->next=cur;
           temp=cur;
           if(cur!=NULL) cur=cur->next;
        }
        return head;
    }
};