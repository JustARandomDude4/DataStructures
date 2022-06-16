
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
struct Node
{
    int data;
    struct Node* next;  
};

// take 2 pointers , one fast and one slow and if one reaches the null, then theres no cycle
int CompareLists(struct Node * headA, struct Node *headB)
{
while(headA!=NULL && headB!=NULL)
{
    if(headA->data==headB->data){
        headA=headA->next;
        headB=headB->next;        
    }
    else return 0;
}

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
    CompareLists(head,head);
    linkedlistTraversal(head);

   
return(0);
}
