#//include <stdio.h>
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void SelectionSort(int *arr,int n)
{
    for(int i=0;i<n-1;i++)
    {
        int minIndex=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minIndex])
            swap(&arr[minIndex],&arr[j]);
        }
    }
}
int main()
{
    int arr[]={5,6,9,1,2};
    for(int i=0;i<5;i++)
    printf(" %d ",arr[i]);
    
    printf("\n");
    
    SelectionSort(arr,5);
    for(int i=0;i<5;i++)
    printf(" %d ",arr[i]);
    return 0;
}