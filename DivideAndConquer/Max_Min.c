#include <stdio.h>

// input = [1,2,8,23,4,9,3]
//output : Max : 23   Min : 1
#include <iostream>

using namespace std;
int Max(int* a, int i, int j)
{
    if(i==j)
            return a[i];
    
    else if(i+1==j)
    {
        if(a[i]>=a[j])
            return a[i];
        else
            return a[j];
    }
    else
    {
        int mid=(i+j)/2;
        
        int x=Max(a, i, mid);
    
        int y=Max(a,mid+1,j);
    
        if(x>y)
           return x;
        else
           return y;
    }
}
int main()
{
    cout<<"Max Element :";
    int a[]={5,6,8,1,2,18,78,10};
    cout<<Max(a,0,7);

    return 0;
}