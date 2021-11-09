// C(i,j) =E[ A(i,k)B(k,j) ]  from k=0,n-1       A=m*n  B=n*p

#include <stdio.h>
int main()
{
    int m,n,sum=0;
    int a[3][4],b[4][2],result[3][2];
    printf("enter your first matrix\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("Enter %d %d element \n",i,j);
            scanf("%d",&a[i][j]);     
        }
    }

    printf("enter your second matrix\n");
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("Enter %d %d element \n",i,j);
            scanf("%d",&b[i][j]);     
        }
    }


    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            for(int k=0;k<4;k++)
            {
                sum=a[i][k]*b[k][j]+sum;
            }   
            result[i][j]=sum;
            sum=0;
        }
    }

    printf("The result matrix is\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf(" %d \n",result[i][j]);
        }
        printf(" \n ");
    }
return 0;}
