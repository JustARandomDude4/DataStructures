#include <iostream>
#include <algorithm>
#include<string>

using namespace std;
 bool isRotation(string s1,string s2)
 {
     for(int i=0;i<s1.length();i++)
     {
         string x=s1.substr(0,i+1);
         string y=s1.substr(i+1);
         y.append(x);
         
         if(s2==y)
             return(true);
     }
     return(false);
 }
int main()
{

    cout<<isRotation("and","dan");
    return 0;
}