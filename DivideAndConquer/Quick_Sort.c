//#include <stdio.h>
void swap(int * a, int* b)
{
    int  temp=*a;
    *a=*b;
    *b=temp;
}
/* This function takes last element as pivot, places the pivot element at its correct position in sorted
array, and places all smaller than pivot)to left of pivot and all greater elements to right of pivot */

int partition(int *arr,int left,int right)
{
    int i=left;   
    int j=right;  
    int pivot=arr[left];
    
    do
    {
        do
        {
            i++;                   // increments until ele > pivot is found
        }while(arr[i]<=pivot);
        
        do
        {
            j--;                  // decrements until ele < pivot is found
        }while(arr[j]>pivot);
        
        swap(&arr[i],&arr[j]);   // once i, j are found, elements swapped to proper places
        
    }while(i<j);
    
    int pivotIndex=j;
    swap(&arr[left],&arr[pivotIndex]);  // once sorting around pivot done, pivot is swapped to its correct place

    return pivotIndex;
}
void QuickSort(int arr[],int left,int right)
{

    int pivotIndex;
    if (left<right)
    {
        pivotIndex=partition(arr,left,right);
        // Separately sort elements before and after pivot
        QuickSort(arr,left,pivotIndex);
        QuickSort(arr,pivotIndex+1,right);
    }
}
int main()
{    
    int arr[]={5,2,1,7,17,20,3};
    
    printf("Before sorting : \n");
    for(int i=0;i<7;i++)
    printf(" %d ",arr[i]);
    
    QuickSort(arr,0,6);
        
    printf("\nAfter sorting : \n");
    for(int i=0;i<7;i++)
    printf(" %d ",arr[i]);

  return 0;  
}
