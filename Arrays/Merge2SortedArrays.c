
#include <stdio.h>

int * MergeSortedArrays(int *array,int *arr1,int *arr2,int n,int n1,int n2)
{
    int i=0,j=0,k=0;
    
    while(i<n1 && j<n2)
    {
        if (arr1[i]<arr2[j])
        {
            array[k]=arr1[i];
            k++;
            i++;
        }
        
        else
        {
            array[k]=arr2[j];  
            k++;
            j++;
        }
    }
// Add the remaining elements
    while(i<n1)
    {
        array[k]=arr1[i];
        k++;
        i++;
    }
    while(j<n2)
    {
        array[k]=arr2[j];
        k++;
        j++;
    }
}

int main()
{
    int n1=4,n2=4,n=n1+n2;
    int arr2[]={1,3,5,7};
    int arr1[]={2,4,6,8};
    int array[n];
    
    MergeSortedArrays(array,arr1,arr2,n,n1,n2);
    
    for(int i=0;i<8;i++)
    printf(" %d ",array[i]);
    
    return 0;
}