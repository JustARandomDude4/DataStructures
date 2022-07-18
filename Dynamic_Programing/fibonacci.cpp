#include <bits/stdc++.h>
using namespace std;

// Fibonacci using normal reccursion
int fibRec(int n)
{
    if(n<=1)
      return n;
    else
      return(fibRec(n-1)+fibRec(n-2));
}
//Fibonacci using normal iteration
int fibIter(int n)
{
    int first=0,second=1,result;
    for(int i=0;i<=n;i++)
    {
        if(i<=1)
          result=i;
        else
          result = first + second;
          first = second;
          second = result;
    }
    return result;
}
// Fibonacci using Tabulation dynamic prg
int fibT(int n)
{
    int F[n];
    for(int i=0;i<n;i++)
    {
        if (i==0 || i==1)
        F[i]=1;
        
        else
        F[i]=F[i-1]+F[i-2];
    }
    return F[n-1];
}

// Fibonacci using Memoization dynamic prg
int term[1000];

int fibM(int n)
{
    // base case
    if (n <= 1)
        return n;
 
    // if fib(n) has already been computed we do not do further recursive calls and hence reduce the number of repeated
    if (term[n] != 0)
        return term[n];
 
    else {
        // store the computed value of fib(n) an array term at index n to so that it does not needs to be computed again
        term[n] = fibM(n - 1) + fibM(n - 2);
 
        return term[n];
    }
}
int main()
{
    int n = 6;
    cout<<fibRec(n)<<"\n";
    cout<<fibIter(n)<<"\n";
    cout<<fibM(n)<<"\n";
    cout<< fibT(n);
    
    return 0;
}