#include <stdio.h>

// input = [1,2,8,23,4,9,3]
//output : Max : 23   Min : 1

int Max(int *arr, int ele1,int ele2,int max)
{
    int a,b,mid;
    
    if(ele1==ele2)      // one element left
    { 
        max=arr[ele1]; return max; 
        
    }
    
    if(ele1+1==ele2 )    // if there are  2 elements  (base condition 1)
    {
        if (arr[ele1]>arr[ele2])   {  max=arr[ele1];  return max; }
    
        else             {   max=arr[ele2];  return max;}
    }
    
    else                 //if there are >2 elements left  (divide)
    {
        mid=(ele1+ele2)/2;
        
        a=Max(arr,ele1,mid,max);
        
        b=Max(arr,mid+1,ele2,max);
        

         if (a>b)  {return a;}
        
         else    {return b;}
    }
}

int main()
{
    int arr[]={1,2,65,3,4,15,12};
    printf("max element of array is %d",Max(arr,0,5,0));
    return 0;
}
