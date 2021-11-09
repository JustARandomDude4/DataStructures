#include<stdio.h>

/*
Contents:
display || insert || delete||linear S||binary S||insertion So|| Bubble So

*/

void display(int arr[],int n)  //code for traversal
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int indInsertion(int arr[],int size,int element,int capacity,int index)  //code for insertion
{
    if(size>=capacity)  { return(-1); }   

    for(int i=size-1;i>=index;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    return(1);
}

int indDeletion(int arr[],int size,int index1)
{
    for(int i=index1;i<size-1;i++)    
    {
        arr[i]=arr[i+1];
    }
}
int linearSearch(int arr[],int size,int findE)
{
    for(int i=0;i<size;i++)
    {   
        if(arr[i]==findE)    {  return(i);  }    
    }
       return -1;
}

int binarySearch(int arr[],int size,int findE)
{
    int f=0,m,l=size-1;
    while(l>=f)
    {
        m=(f+l)/2;
        if(arr[m]==findE)    {  return(m);  }
        else if(arr[m]<findE)     { f=m+1; }
        else if (arr[m]>findE)    {  l=m-1;}
        else{continue;}
    }
    return -1;
}
// sorting algos
void BubbleSort(int arr[],int size)
{   int isSorted=0;  // To make it adaptive

    for(int i=0;i< (size-1) ;i++)  // total (n-1) passes
    {   isSorted=1;
        for(int j=0;j< (size-1-i) ;j++)   //total (n-1-i) comparisions
        {
            if(arr[j]>arr[j+1]) //swap if true
             { 
                 int temp=arr[j]; arr[j]=arr[j+1]; arr[j+1]=temp;
             
             }
        }

        if(isSorted==1)   { printf("%d pass\n",i+1);return ; }  // we will know in one pass only if its sorted or not
        //if int he first pass, no swap is hapening then isSorted=1, so its aready sorted.
    }
}
void InsertionSort(int arr[],int size)
{   int key,j;
    for(int i=1;i<= (size-1) ;i++)
    {
        key=arr[i];  //key is the [artition between sorted and unsorted parts]
        j=i-1;       //starting to check from key's before element j0

        while(j>=0 && arr[j]>key)   
        {
            arr[j+1]=arr[j];  j--;  //comparing from back and sending least element to last
        }
        arr[j+1]=key; //when j=-1 then comes out of whileloop 

    }

}

int main()
{
    int arr[100]={9,2,1,7,10};
    int size=5;  int element=45; int capacity=100;int index=3;
    display(arr,size);
        
    int findE=4;
    int searchIndex=binarySearch(arr,size,findE);
    printf("The element %d was found at the index %d \n",findE,searchIndex);

    int searchIndex1=linearSearch(arr,size,findE);
    printf("The element %d was found at the index %d\n ",findE,searchIndex1);

    indInsertion(arr,size,element,capacity,index);
    size +=1;
    display(arr,size);

    int index1=4;
    indDeletion(arr,size,index1);
    size-=1;
    display(arr,size);

    InsertionSort(arr,size);
    display(arr,size);

    BubbleSort(arr,size);
    display(arr,size);
    
    

return 0;
}
