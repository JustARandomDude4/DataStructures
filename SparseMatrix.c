#include <stdio.h>
#include <stdlib.h>
// contents:  accepting || printing  || transpose ||fast transpose
//            addition  || multiplication

typedef struct 
{
    int row;
    int column;
    int value;
}Sparse;

void storing(int arr[3][3],Sparse t[10])
{   int k=0;
    for(int i=0;i<3;i++)
    {   for(int j=0;j<3;j++)
        { if(arr[i][j]!=0)
            {   
                t[k].row=i;
                t[k].column=j;
                t[k].value=arr[i][j];
                k++;
            }            
        }
    }
}

void transpose(Sparse t[10])
{
    for(int i=0;i<4;i++)
    {   int temp=t[i].row;
        t[i].row=t[i].column;
        t[i].column=temp;
    }
}
void printing(Sparse t[10])
{   int k=0;
    for(int i=0;i<3;i++)
    {   for(int j=0;j<=3;j++)
          {
             if(t[])
          }
        printf("%d ",t[k].value);
        k++;
    }
}

int main()
{
    int a[3][3]={{1,2,0},{0,0,0},{5,0,1}};
    printf("ad\n");
    Sparse terms[10];
    printf("asdasdasd\n");
    storing(a,terms);
    printf("sada\n");
    printing(terms);
    transpose(terms);
    printing(terms);
    
    
  return 0;  
}