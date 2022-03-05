//Making top as global variable. God its wayyyyy more easy lol.

#include<stdio.h>
#include<stdlib.h> 
typedef struct Node
{
    int data;
    struct Node *next; 
}Node;

   Node *top=NULL;

int isEmpty()
{      if(top==NULL)   {return 1;}     else {return 0;}  }

int isFull()
{
    Node *CheckPointer=(Node *)malloc(sizeof(Node)); //If I am unable to allocate memory dynmically then it will point to null
    if(CheckPointer==NULL) {return 1;}  else {return 0;}
}

void push(int x)
{         
      if(isFull())
    {
        printf("Stack Over flow. Can't push %d",x);
    }
      else
      {
          if(isEmpty())
          {
             Node* NewNode=(Node*)malloc(sizeof(Node));
             NewNode->data=x;
             NewNode->next=NULL;
             top=NewNode;
          }
          else
          {
             Node* NewNode=(Node*)malloc(sizeof(Node));
             NewNode->data=x;
             NewNode->next=top;
             top=NewNode;
          }
      }  
    
}
void pop()
{   
    if(isEmpty())
    {
        printf("Stack Underflow\n");
    }
    else
    {   int poppedValue;  Node * poppedPointer;
        poppedPointer=top;
        top=(top)->next;
        poppedValue=poppedPointer->data;
        free(poppedPointer);
        printf("%d is Popped\n",poppedValue);
    }
}

int peek(int position)
{
    Node* ptr=top;
    for(int i=0; (i<position-1) && ptr!=NULL;i++)
    {
        ptr=ptr->next;
    }
    if(ptr==NULL) {  return -1; }
    else          {  return ptr->data; }

}

void LinkedListTraversal( Node *ptr)
{   while(ptr != NULL)
    {
        printf("%d \n",ptr->data);
        ptr=ptr->next;
    }
}

int main()
{

    push(12);
    push(13);
    push(14);
    push(15);
    push(16);
    push(17);
    push(18);
    printf("Contents of stack are : \n");
    LinkedListTraversal(top);
    pop();
    pop();
    printf("Contents of stack are : \n");
    LinkedListTraversal(top);

    for(int i=1;i<=5;i++)
    {printf("The data at the position %d is %d\n",i,peek(i));}

    


return 0;}