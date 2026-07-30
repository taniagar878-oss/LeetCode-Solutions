class Solution {
public:
    struct ListNode
    {
        int data;
        ListNode* next;
    };
    ListNode* getNode(int x)
    {
        ListNode* temp=new ListNode;
        temp->data=x;
        temp->next=NULL;
        return temp;
    };
    ListNode* Build(int n)
    {
        ListNode* head=getNode(1);
        int val=2; 
        ListNode* temp=head;
        while(val<=n)
        {
            temp->next=getNode(val++);
            temp=temp->next;
        }
        temp->next=head;
        return head;
    };
    int findTheWinner(int n, int k) 
    {
        ListNode* head=Build(n);
        ListNode* ptr=head;
        ListNode* temp=head;
        while(temp->next!=head) temp=temp->next;
        int count=1;
        while(ptr->next!=ptr)
        {
            while(count<k)
            {
                temp=ptr;
                ptr=ptr->next;
                count++;
            }
            temp->next=ptr->next;
            ptr=temp->next;
            count=1;
        }
        return ptr->data;
    }
};