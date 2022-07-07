//#include <stdio.h>

//input : [5,12,1,2,9]
//output : [1,2,5,9,12]

void Merge(int* arr,int left,int mid, int right )  //merges two sub arrays
{
    int n1=mid-left+1;
    int n2=right-mid;
    
    int i,j,k;

/* create temp sub-arrays left and right */
    int array1[n1];
    int array2[n2];

/* Copy data to temp arrays array1[] and array2[] */
    for(int i=0;i<n1;i++)
    array1[i]=arr[i+left]; 
    
    for(int j=0;j<n2;j++)
    array2[j]=arr[j+(mid+1)];
    
    
 /* Merge the temp arrays back into arr[left..right]*/
    i = 0;      // Initial index of first subarray
    j = 0;      // Initial index of second subarray
    k = left;   // Initial index of merged subarray

    while(i<n1 && j<n2)
    {
        if(array1[i]<=array2[j])
        {
            arr[k]=array1[i];
            k++;
            i++;
        }
        
        else
        {
            arr[k]=array2[j];
            k++;
            j++;
        }
    }
        
    while(i<n1)     /* Copy the remaining elements of array1[], if there are any */
    {
        arr[k]=array1[i];
        i++;
        k++;
    }
        
    while(j<n2)   /* Copy the remaining elements of array2[], if thereare any */
    {
        arr[k]=array2[j];
        j++;
        k++;
    }
    
}

void MergeSort(int *arr, int left, int right)
{
    int mid=left+(right-left)/2;   // Same as (l+r)/2, but avoids overflow for large l and h

    if(left<right)
    {
        MergeSort(arr,left,mid);    // Sort first and second halves
        MergeSort(arr,mid+1,right);

        Merge(arr,left,mid,right);  //merge the divisions
    }
}

int main()
{
    int arr[]={5,2,1,7,17,20,3};
    
    printf("Before sorting : \n");
    for(int i=0;i<7;i++)
    printf(" %d ",arr[i]);
    
    MergeSort(arr,0,6);
        
    printf("\nAfter sorting : \n");
    for(int i=0;i<7;i++)
    printf(" %d ",arr[i]);
}