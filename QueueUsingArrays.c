#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    int f;  //front index    (btw its not a pointer, just stores iska index bas)
    int b;   //back index
    int size;
    int *arr;
}queue;
int isFull(queue *q)
{
    if(q->b== (q->size)-1 )   {return 1;}
    return 0;
}
int isEmpty(queue *q)
{
    if(q->b== q->f)   {return 1;}
    return 0;
}
void enqueue(queue *q,int v)
{
    if(isFull(q))   { printf("queue Overflow. Can't inqueue %d\n",v);}
    else             {q->b++ ;   q->arr[q->b]=v;  printf("%d inqueued\n",v);   }

}
int dequeue(queue *q)
{
    if(isEmpty(q))   { printf("queue Underflow.Can't enqueue\n");return 0;}
    else             {   q->f++;  int poppedValue=q->arr[q->f];    return(poppedValue);    }

}
int main()
{
    queue  *q; // creating an instance of queue(normal way not dynamically
    q=(queue*)malloc(sizeof(queue *));
    q->size=100;   //initializing q contents
    q->arr=(int *)malloc(q->size*sizeof(int));
    q->f = q->b= 0;

    enqueue(q,12);//I am sending address so as to change original q also
    enqueue(q,13);
    enqueue(q,14);
    enqueue(q,14);
    enqueue(q,15);
    enqueue(q,17);
    enqueue(q,18);
    printf("%d dequeued\n",dequeue(q));
    printf("%d dequeued\n",dequeue(q));

return 0;
}