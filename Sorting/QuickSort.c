#include <stdio.h>

void quickSort(arr,start,end)
{
    if(start>=end) return;

    int index;
    index=partiton(arr,start,end);
    quickSort(arr,start,index-1);
    quickSort(arr,index+1,end);
}

int partition(arr,start,end)
{
    pivotIndex=start;// pivot index is where pivot havve to placced so that evtg left of it is less and rt is more
    pivotValue=arr[end];   //pivot can be started with anything tho
    //we now compare every element with 5 
    for(int i=start;i<end;i++)
    {
        if arr[pivotIndex]<pivotValue
        {
            swap(arr,i,pivotIndex);
            pivotIndex++;
        }
    }
    return pivotIndex;
}
int main()
{

}