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
    ListNode* deleteDuplicates(ListNode* head) 
    {
        if(head==NULL) return head;
        if(head->next==NULL) return head;
        
        unordered_map<int,int>freq;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            freq[temp->val]++;
            temp=temp->next;
        }
        
        temp=head;
        while(temp!=NULL && freq[temp->val]>1)
        {
            temp=temp->next;
        }
        if(temp==NULL) return NULL;
        head=temp;
        ListNode* cur=head->next;
        while(temp->next!=NULL)
        {
            while(cur!=NULL && freq[cur->val]>1)
            {
                cur=cur->next;
            }
            if(cur==NULL) temp->next=NULL;
            else 
            {
                temp->next=cur;
                temp=temp->next;
                cur=cur->next;
            }
        }
        return head;
    }
};