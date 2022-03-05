#include <stdio.h>
#include<stdlib.h>
int main()
{
    int p[100];
    int n;

    printf("Enter the number of elements in your array\n");
    scanf("%d",&n);


        for (int i = 0; i < n; ++i) 
        {scanf("%d",p+i);}

        //dng all array operations

        // 1. Inserting and element into an array
        int e,pos; 
        printf("ENter the element to be inserted and the position of insertion :\n"); 
        scanf("%d%d",&e,&pos);
        for(int i=n;i>=pos;i--)
        {
            p[i]=p[i-1];
        } p[pos]=e;

        printf("\nThe elements of the array after insertion are: \n");
        for (int i = 0; i < n+1 ; ++i) {printf("%d ", p[i]);}

        //2. Deleting an element from the array

         printf("\nENter the element's position to be deleted :\n"); 
        scanf("%d",&pos);
        for(int i=pos;i<n;i++)
        {
            p[i]=p[i+1];
        } 


        printf("\nThe elements of the array after deletion are: \n");
        for (int i = 0; i < n ; ++i) {printf("%d ", p[i]);}

}