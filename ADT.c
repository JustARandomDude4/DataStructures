#include <stdio.h>
#include <stdlib.h>

struct myA      //abstract data type
{
    int totalSize;
    int usedSize;
    int *Ptr;
};
void createA(struct myA* a,int ts,int us)
{
    a->totalSize=ts;
    a->usedSize=us; 
    a->Ptr=(int *)malloc(ts * sizeof(int));  
}

void show(struct myA* a)
{
    for(int i=0; i< a->usedSize ;i++)
      {printf("%d\n",a->Ptr[i]);}
      free(a->Ptr);
}

void setVal(struct myA *a)
{   int n;
    for(int i=0;i<a->usedSize;i++)
    {
        printf("Enter element %d ",i);
        scanf("%d",&n);
        (a->Ptr)[i]=n;
    }
}
int main()
{   struct myA marks;
    createA(&marks,5,2);
    setVal(&marks);
    printf("We are running setVal now\n");
    show(&marks); 
    printf("We are running show now\n");
    
}