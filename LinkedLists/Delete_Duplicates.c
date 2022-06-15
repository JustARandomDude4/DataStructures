#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
struct Node
{
    int data;
    struct Node* next;  
};
struct Node * RemoveDuplicates(struct Node *head)
{
    struct node *t;
    struct Node *cur=head;
    while(cur->next !=NULL)
    {
        if(cur->data==cur->next->data)
        {
            t=cur->next;
            cur->next = cur->next->next;
            free(t);
        }
        
        else
        cur=cur->next;
    }
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
    linkedlistTraversal(head);
    RemoveDuplicates(head);
    linkedlistTraversal(head);

   
return(0);
}