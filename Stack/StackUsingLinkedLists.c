#include <stdio.h>
#include <stdlib.h>

// If u dont want to make double pointer of top, u have to make it a global variable like:
//Node* top; and then the local top variables should not be used. change the name.
//If top made global variable then u dont have to send pop(top)or push(top)
//directly u can use. Okay dumbass Satwi?

//lets make same prpogram making it global variable in another file
typedef struct Node
{
    int data;
    struct Node *next; 
}Node;

int isEmpty(Node *top)
{      if(top==NULL)   {return 1;}     else {return 0;}  }

int isFull()
{
    Node *CheckPointer=(Node *)malloc(sizeof(Node)); //If I am unable to allocate memory dynmically then it will point to null
    if(CheckPointer==NULL) {return 1;}  else {return 0;}
}

Node* push(Node *top,int x)//the top here is local top not the original one.
{         
      if(isFull())
    {
        printf("Stack Over flow. Can't push %d",x);
    }
      else
      {
          if(isEmpty(top))
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
    return(top);//we r returning local top not original top
}

int pop(Node **top)
{   
    if(isEmpty(*top))
    {
        printf("Stack Underflow\n");
    }
    else
    {   int poppedValue;  Node * poppedPointer;
        poppedPointer=*top;
        *top=(*top)->next;
        poppedValue=poppedPointer->data;
        free(poppedPointer);
        return(poppedValue);
    }

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
    Node *top=NULL;
    top=push(top,12);
    top=push(top,13);
    top=push(top,14);
    top=push(top,15);
    top=push(top,16);
    top=push(top,17);
    printf("Contents of stack are : \n");
    LinkedListTraversal(top);
    printf("%d is popped\n",pop(&top));
    /*as of u send only top then u r ssending only copy of top
     So, either we have to make it global variable or send the address of top
     as pointer of pointer*/
    printf("Contents of stack are : \n");
    LinkedListTraversal(top);
    


return 0;}