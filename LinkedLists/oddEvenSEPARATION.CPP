class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        
        ListNode *EvenHead=new ListNode(0);
        ListNode *eventemp=EvenHead;
        ListNode *OddHead=new ListNode(0);
        ListNode *oddtemp=OddHead;
        
        ListNode *temp;
        while(temp)
        {
            ListNode *newNode=new ListNode(temp->val);
            if((temp->val)%2==0)
            {
                eventemp->next=newNode;
                eventemp=eventemp->next;
            }
            else
            {
                oddtemp->next=newNode;
                oddtemp=oddtemp->next;
            }
            temp=temp->next;
        }
        
        eventemp->next=OddHead->next;
        return EvenHead->next;
        
        
    }
