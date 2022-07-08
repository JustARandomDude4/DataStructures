//#include <stdio.h>

// input = [1,2,3,4,5,8] , 7
//output = element not found

int binarySearch(int *arr,int element,int low,int high)
{
    if(low<=high)
    {
        int mid=low+ (high-low)/2;
        
        if(element==arr[mid])  { return 1;  }

        else if(element>arr[mid])  { return binarySearch(arr,element,mid+1,high);   }

        else  { return binarySearch(arr,element,low,mid-1);   }
    }
    return 0;
}

int main()
{
    int n;
    printf("enter the number of elements in the array : ");
    scanf("%d",&n);

    int arr[n];   //initialize the array

    printf("\nenter the elements of array one by one : \n");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);

    int ele;
    printf("enter the element to be searched in the array : ");
    scanf("%d",&ele);

    if(binarySearch(arr,ele,0,n)==1)    { printf("element is found");}

    else    {  printf("element is not found");  }
    
    return 0;
}
