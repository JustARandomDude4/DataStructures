#include <iostream>
#include <vector>
#include<algorithm>
#include <string.h>

using namespace std;
bool isUnique(string s)
{
    
}
int main()
{
    string s="abccde";
    vector<char> uniqueEle;
    int i=0;
    do{
        if(find(uniqueEle.begin(), uniqueEle.end(), s[i]) != uniqueEle.end())
            printf("characters are not unique \n");
        else
            uniqueEle.push_back(s[i]);
        i++;
            
    }while(i!=s.length());
    
    if(isUnique("abceeffeeeeeef"))
    cout<<" unique string";
    else
    cout<<"not unique ";
    return 0;
}