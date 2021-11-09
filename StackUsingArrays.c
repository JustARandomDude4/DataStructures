//Contains all operations of Adt of stack
/* 1.isEmpty() || 2.isFull() || 3.push() || 4.pop()  || 5.peek() 
|| 6.stackTop() ||7.stackBottom()*/

#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    int size;
    int top;
    int* arr;        
}stack;

int isEmpty(stack *ptr) //checks if the stack is empty or not
{
    if(ptr->top==-1) {return 1;}
    else             {return 0;}
}
int isFull(stack *ptr) //checks if the stack is full or not
{
    if(ptr->top==ptr->size-1) {return 1;}
    else             {return 0;}
}
void push(stack* p,int value)
{
    if(isFull(p))   {printf("Stack Over Flow. Can't push %d\n",value);}
    else           
     {
         p->top++; 
         p->arr[p->top]=value;
     }    
}
int pop(stack* p)
{
    if(isEmpty(p))   {printf("Stack UnderFlow can't pop\n");return -1;}
    else           
     {
         int val=p->arr[p->top];
         p->top--;
         return val;
     }    
}
int peek(stack* p,int i)
{
    int GivenIndex=(p->top)-i;
    if(GivenIndex <0) {printf("Given Index is not valid \n");return -1;}
    else              {return(p->arr[GivenIndex]);}
}

int stackTop(stack *p)
{return(p->arr[p->top]);}

int stackBottom(stack *p)
{ return(p->arr[0]); }

int main()
{  
    stack *s=(stack*)malloc(sizeof(stack*));

    s->size=10;  s->top=-1; 
    s->arr= (int*)malloc(s->size*sizeof(int));
    

    //s->arr[0]=1; s->top++;  //manual push
    push(s,11);
    push(s,12);
    push(s,19);
    push(s,15);
    push(s,14);
    push(s,21);
    push(s,88);
    push(s,17); 
    push(s,29);
    push(s,32); 
    push(s,82);  
                                       //pushing is inserting an element at the top
    printf("Popped %d from stack\n",pop(s));        //popping is removing an element from the top
    printf("Popped %d from stack\n",pop(s));
    //printing values from the stack
    for(int i=0;i<=(s->top);i++)
    {
        printf("The element at position %d is %d \n",i+1,peek(s,i));
    }
    
    printf("The top most element of the stack is %d\n",stackTop(s));
        printf("The bottom most element of the stack is %d\n",stackBottom(s));

    /*remember when u r peeking at the 1st element u r peeking at top of stack
    so when u r accesing the array, that is the last element
     so i is taken as  (top-i-1) inside peek function*/
   
return 0;
}