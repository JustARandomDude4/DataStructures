#include <iostream>
#include<algorithm>
using namespace std;

int isPermutation(string s1, string s2)
{
    if(s1.length()!=s2.length())
        return 0;
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    
    if(s1==s2)
        return 1;
    return 0;
}
int main()
{
    if(isPermutation("satwika","akiwtas"))
    cout<<"its a permutation";
    else
        cout<<"its  not a permutation";
    return 0;
}