#include <iostream>
using namespace std;
int isPrime(int n)
{
    // if a number is  divisible by any number greater than its root, then its divisible by a number lesser than its root
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
          return 0;
    }
    return 1;
}
int main()
{
    int n;
    cout<<"enter a no :";
     cin>>n;
    if(isPrime(n))
      cout<<"\n Its a prime no\n";
    else
      cout<<" Its not a prime no\n";
}