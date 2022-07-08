// Partition methods can be differnt
// I wrote 2 differnt partition methods as 2 differnt prgs
//#include <stdio.h>

void quickSort(arr,start,end)
{
    if(start>=end) return;

    int index;
    index=partiton(arr,start,end);
    quickSort(arr,start,index-1);
    quickSort(arr,index+1,end);
}

int partition1(int *arr,int start,int end)
{

    int pivotIndex=start;// pivot index is where pivot havve to placced so that evtg left of it is less and rt is more
    int pivotValue=arr[end];   //pivot can be started with anything tho
    //we now compare every element with 5 
    for(int i=start;i<end;i++)
    {
        if (arr[pivotIndex]<pivotValue)
        {
            //swap(arr,i,pivotIndex);
            pivotIndex++;
        }
    }
    return pivotIndex;
}



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


