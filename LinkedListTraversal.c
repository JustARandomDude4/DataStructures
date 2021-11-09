#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node* next;  
};
struct Node* insertAfterNode(struct Node *head,int data,struct Node *preNode)
{
    struct Node *ptr;
    ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->next=preNode->next;
    preNode->next=ptr;


    return head;
}
void linkedlistTraversal(struct Node *ptr)
{   while(ptr != NULL)
    {
        printf("%d \n",ptr->data);
        ptr=ptr->next;
    }

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
    fourth->next=NULL; 

    printf("Linked list transversal\n");
    linkedlistTraversal(head);

    head=insertAfterNode(head,45,third);
    printf("\nPrinting linked list contents after insertion of 45 after third node \n");
    linkedlistTraversal(head);

return(0);
}