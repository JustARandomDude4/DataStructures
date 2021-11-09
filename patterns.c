#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("enter order of matrix");
    int n;
    scanf("%d",&n);
    int a[n][n];
    int s=0,t=n , k=1;
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    {
        if(abs(i - n/2) > abs(j -i+ n%2))
                a[i][j] = abs(i - n%2) + 1;
            else
                a[i][j] = (abs(j+n%2) + 1);
             
    }

    for(int i=0;i<n;i++)
   { for(int j=0;j<n;j++)
    {
       printf("%d ",a[i][j]);         
    }printf("\n");}
return 0;}