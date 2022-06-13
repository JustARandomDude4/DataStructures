#include<stdio.h>

int main()
{
    int a[10]={ [0]=2, [4]=12 };

 //  int b[10]={ [2...6]=8};
    printf("%d  %d \n",&a[0],&a[0]+1);

    printf("%d  %d \n",a+1,a[0]+1);

    int i=3;
    printf("%d  %d \n",a[i],i[a]);



    return 0;

}