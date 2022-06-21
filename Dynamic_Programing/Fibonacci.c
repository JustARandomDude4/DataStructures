#include <stdio.h>

//top-down approach

int fiboTabualtion(int n)
{
     if n<=1 return n;

     for(int i=2;i<=n;i++)
     {
        F[i]-F[i-1]+F[i-2];
     }

     return F[n];
}

int fiboMemotization(int dp[],int n)
{
    if(n<=1 )return n;
    if(n==2) return 1;

    dp[n]=fiboMemotization(dp,n-1)+fiboMemotization(dp,n-2);
    return dp[n];
}

int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    fiboTabualtion(n);
    int dp[n];
    fiboMemotization(dp,n);
}