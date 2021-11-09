#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    int f;  //front index    (btw its not a pointer, just stores iska index bas)
    int r;   //rear index
    int size;
    int *arr;
}queue;
int isFull(queue *q)
{
    if(((q->r +1)% (q->size)) == q->f)   {return 1;}
    return 0;
}
int isEmpty(queue *q)
{
    if(q->r== q->f)   {return 1;}
    return 0;
}
void enqueue(queue *q,int v)
{
    if(isFull(q))   { printf("queue Overflow. Can't inqueue %d\n",v);}
    else            
     {  
         q->r= ((q->r) +1) % (q->size); 
         q->arr[q->r] = v;  
         printf("%d inqueued\n",v);   
     }

}
int dequeue(queue *q)
{
    if(isEmpty(q))   { printf("queue Underflow.Can't enqueue\n");return -1;}
    else             
    {  
        q->f = ((q->f)+1) % (q->size); 
        int poppedValue= q->arr[q->f];  
        return(poppedValue);  
    }

}
int main()
{
    queue  q; // creating an instance of queue(normal way not dynamically
    q.size=100;   //initializing q contents
    q.arr=(int *)malloc(q.size*sizeof(int));
    q.f = q.r= 0;

    enqueue(&q,12);//I am sending address so as to change original q also
    enqueue(&q,13);
    enqueue(&q,14);
    printf("%d dequeued\n",dequeue(&q));
    printf("%d dequeued\n",dequeue(&q));
    printf("%d dequeued\n",dequeue(&q));
    enqueue(&q,15);
    enqueue(&q,17);
    enqueue(&q,18);

    if(isEmpty(&q))          { printf("Queue is empty\n");}
    if(isFull(&q))           {printf("Queue is full\n"); }

return 0;}