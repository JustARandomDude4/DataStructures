#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}Node;

struct Node* insertAtFirst(struct Node *head,int data)
{
    struct Node* ptr;
    ptr=(struct Node*)malloc(sizeof(struct Node));

    ptr->data=data;
    ptr->next=head;

    return(ptr); //returning new head
}

struct Node* insertAtIndex(struct Node *head,int data,int index)
{
    struct Node* ptr;
    ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node* p=head;
    int i=0;
    while(i!=index-1) //making p point to index's before number
    {
        p=p->next;
        i++;
    }
    ptr->next=p->next;
    p->next=ptr;
    
return (head);
}

struct Node* insertAtEnd(struct Node *head,int data)
{
    struct Node* ptr;
    ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data =data;
    struct Node *p=head;

    while(p->next!=NULL)
    {
        p=p->next;
    }
    ptr->next=NULL;
    p->next=ptr;    
return head;
}

void insertAfterNode(struct Node *head,int data,struct Node* preNode)
{
    struct Node *ptr;
    ptr=(struct Node *)malloc(sizeof(struct Node));
    //this order is very important else infinite loop happens :(( 
    ptr->data=data;
    ptr->next=preNode->next;
    preNode->next=ptr;

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

//Dynamic memory allocation for the nodes
    head=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));
    fourth=(struct Node *)malloc(sizeof(struct Node));
//Linking the lists

     head->data=4;
     head->next=second;

     second->data=5;
     second->next=third;

     third->data=6;
     third->next=fourth;

     fourth->data=7;
     fourth->next=NULL;
//
printf("Printing linked list contents\n");
LinkedListTraversal(head);

head=insertAtFirst(head,3);
printf("Printing linked list contents after insetion of 3 at the start\n");
LinkedListTraversal(head);

head=insertAtIndex(head,9,3);
printf("Printing linked list contents after insetion of 9 at the 3rd index\n");
LinkedListTraversal(head);

head=insertAtEnd(head,10);
printf("Printing linked list contents after insetion of 10 at the end \n");
LinkedListTraversal(head);

insertAfterNode(head,55,second);
printf("Printing linked list contents after insetion of 55 after second node \n");
LinkedListTraversal(head);

return 0;
}