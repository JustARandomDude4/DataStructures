#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node* deleteAtFirst(struct Node *head)
{
    struct Node* ptr;
    ptr=(struct Node*)malloc(sizeof(struct Node));
    
    ptr=head;  
    head=head->next;
    free(ptr);    
return(head); //returning new head
}

struct Node* deleteAtIndex(struct Node *head,int index)
{
    struct Node *p,*q;
    p=head;  q=head->next;
    
    int i=0;
    while(i!=index-1) //making p point to index's before number and q to index's number
    {
        p=p->next;  q=q->next;
        i++;
    }
    p->next=q->next;
    free(q);
    
return (head);
}

struct Node* deleteAtEnd(struct Node *head)
{
    struct Node *p,*q;
    p=head;q=head->next;

    while(q->next!=NULL)
    {
        p=p->next;q=q->next;
    }
   p->next=NULL;
   free(q);
return head;
}

struct Node* deleteAtValue(struct Node * head,int value)
{
    struct Node *p,*q;
    p=head; p=head->next;
    while(q->data!=value && q->next!=NULL)
    {
        p=p->next; q=q->next;
    }  
    if(q->data==value) 
    {
        p->next=q->next;
        free(q);
    }
return(head);
}
void LinkedListTraversal(struct Node *ptr)
{
    while(ptr !=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }

}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;

//Dynamic memory allocation for the nodes
    head=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));
    fourth=(struct Node *)malloc(sizeof(struct Node));
    fifth=(struct Node *)malloc(sizeof(struct Node));
//Linking the lists

     head->data=4;
     head->next=second;

     second->data=5;
     second->next=third;

     third->data=6;
     third->next=fourth;

     fourth->data=7;
     fourth->next=fifth;

     fifth->data=8;
     fifth->next=NULL;
//
printf("Printing linked list contents\n");
LinkedListTraversal(head);

head=deleteAtFirst(head);
printf("Printing linked list contents after deletion of first node\n");
LinkedListTraversal(head);

printf("Printing linked list contents after deletion of the node having a value of 5 \n");
head=deleteAtValue(head,5);
LinkedListTraversal(head);


head=deleteAtIndex(head,2);
printf("Printing linked list contents after deletion of 2nd index \n");
LinkedListTraversal(head);

head=deleteAtEnd(head);
printf("Printing linked list contents after deletion if end node \n");
LinkedListTraversal(head);


return 0;
}