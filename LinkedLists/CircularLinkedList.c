#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node* next;  
};

void linkedlistTraversal(struct Node *head)
{   struct Node *ptr=head;
    do              //dowhile so as to print head first else it wont print
    {
        printf("%d \n",ptr->data);
        ptr=ptr->next;

    } while(ptr != head);
}
struct Node* insertAtFirst(struct Node *head,int data)
{
    struct Node* ptr=(struct Node *)malloc(sizeof(struct Node));
    struct Node* p=head->next; //for getting last element

    ptr->data=data;
    ptr->next=head;
    while (p->next!=head)   {   p=p->next;   } //loop until we get last element
    p->next=ptr;
    head=ptr;
    return(head);
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

//Allocate memory for nodes int the linked list in Heap
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));

//   Linking the lists
    head->data=7;
    head->next=second;

    second->data=8;
    second->next=third;

    third->data=9;
    third->next=fourth; 

    fourth->data=10;
    fourth->next=head; 

    printf("Linked list transversal\n");
    linkedlistTraversal(head);
    head=insertAtFirst(head,12);
    printf("Linked list after inserting 12 at the end\n");
    linkedlistTraversal(head);

    

return(0);
}