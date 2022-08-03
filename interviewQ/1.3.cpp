
#include <iostream>
#include<vector>
#include<string>

using namespace std;

string URLify(string s)
{
    string s1="";
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==' ')
           {
            s1.push_back('%');
            s1.push_back('2');
            s1.push_back('0');     
           }
        else
            s1.push_back(s[i]);
    }
    
return(s1);
        
}
int main()
{
    cout<<URLify("ha  ka d");
    
    
    return 0;
}