#include <stdio.h>
#include <stdlib.h>

struct Node
{
    struct Node* prev;
    struct Node* next;
    int data;
};

void DLLTraversal(struct Node * p)
{   
    while(p !=NULL)
    {   
        printf("%d \n",p->data);
        p=p->next;
    }
}
int main()
{
    struct Node *head=(struct Node *)malloc(sizeof (struct Node));
    struct Node *second=(struct Node *)malloc(sizeof (struct Node));
    struct Node *third=(struct Node *)malloc(sizeof (struct Node));
    struct Node *fourth=(struct Node *)malloc(sizeof (struct Node));
    
    head->prev=NULL; head->next=second; head->data=1;
    second->prev=head; second->next=third; second->data=2;
    third->prev=second; third->next=fourth; third->data=3;
    fourth->prev=third; fourth->next=NULL; fourth->data=4;
     printf("Dobly Linked list transversal\n");
    DLLTraversal(head); 

    

return 0;}