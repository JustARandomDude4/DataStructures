#include <stdio.h>
#include <stdlib.h>
#include <string.h>  //as we used strlen()

typedef struct 
{
    int size;
    int top;
    char* arr;        
}stack;


int isEmpty(stack *p) //checks if the stack is empty or not
{
    if(p->top==-1) {return 1;}
    else             {return 0;}
}
int isFull(stack *p) //checks if the stack is full or not
{
    if(p->top==p->size-1) {return 1;}
    else             {return 0;}
}
void push(stack *p,int value)
{
    if(isFull(p))   {printf("Stack Over Flow. Can't push %d\n",value);}
    else           
     {
         p->top++; 
         p->arr[p->top]=value;
     }    
}
int pop(stack *p)
{
    if(isEmpty(p))   {printf("Stack UnderFlow can't pop\n");return -1;}
    else           
     {
         int val=p->arr[p->top];
         p->top--;
         return val;
     }    
}
char stackTop(stack * p)
{    return(p->arr[p->top]);    }

int precedence(char ch)
{
   if(ch=='*' ||ch=='/') {return 3;}
   else if(ch=='+' ||ch=='-') {return 2;}
   else                  {return 0;}
}
int isOperator(char ch)
{
    if(ch=='+' ||ch=='-' ||ch=='*' ||ch=='/')  {return(1);}
    return 0;
}

char* infixToPostfix(char* infix)
{
    stack *sp=(stack *)malloc(sizeof(stack *));  //making an instance sp of stack 
    sp->size=100;  sp->top=-1;  //stack initialisations
    sp->arr =(char *)malloc(sp->size*sizeof(char));  //stores stack

    char *postfix=(char *)malloc((strlen(infix)+1)*sizeof(char));//array with size same as infix to store the postfix exp

    int i=0;  //this tracks infix traversal
    int j=0;  //thid tracks postfix traversal

    while(infix[i]!='\0')
    {
        if(! isOperator(infix[i]))
        {
            postfix[j++]=infix[i++]; //first assigns then increments i,j
        }
        else
        {
            if(precedence(infix[i]) > precedence(stackTop(sp)))
            {
                push(sp,infix[i++]);//pushes the operator then increments i
            }
            else
            {
                postfix[j++]=pop(sp); //if it has a lower precedence then pops that operator and sends it to postfix
            }
        }
    }//now once we reach end of infix array, we still might have operators in stack

    while(!isEmpty(sp))  //if its not empty, we transfer the contents to post fix
    {
        postfix[j++]=pop(sp);
    }

    //now that we r done, we end the postfix with null operator
    postfix[j]='\0';
    return postfix;
}

int main()
{  
    char * infix="x-y/z-k*d";
    printf("postfix is %s",infixToPostfix(infix));    
return 0;
}