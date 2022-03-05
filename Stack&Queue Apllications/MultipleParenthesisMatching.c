#include <stdio.h>
#include <stdlib.h>

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
int match(char a,char b)  //matches if popped character is matching with the expression one
{
    if(a=='{' &&b=='}')       {return 1;}
    else if(a=='(' &&b==')')  {return 1;}
    else if(a=='[' &&b==']')  {return 1;}
    else                      {return 0;}
}

int parenthesisMatch(char *exp)
{   stack *sp;
    sp->size=100;
    sp->top=-1;
    sp->arr=(char*)malloc(sp->size*sizeof(char));

    for(int i=0; exp[i]!='\0'; i++)  //loop goes on until expression comes to an end
    {
        if(exp[i]== '(' || exp[i]=='[' || exp[i]=='{')   { push(sp,exp[i]);}

        else if(exp[i]== ')'||exp[i]== ']'||exp[i]== '}' )  
        {
            if(isEmpty(sp))                      { return 0;}

            char poppedChar=pop(sp);
            if(!match(poppedChar,exp[i]))        { return 0; }  
        }
    }

    if(isEmpty(sp))  {return 1;}
    else             {return 0;}
}
int main()
{  
    char *exp="{([8*9+8/2]+2)*8})";


    if(parenthesisMatch(exp)) {printf("The parenthesis is mathching");}
    else          {printf("The parenthesis is not matching");} 


return 0;
}