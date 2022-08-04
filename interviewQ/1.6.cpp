#include <iostream>
#include <algorithm>
#include<string>

using namespace std;
 string oneway(string s)
 {
     int count=1; char c=s[0];
     string compressedstring;
     for(int i=1;i<s.length();i++)
     {
         while(s[i]==s[i-1])
         {
            cout<<i<<endl;
            count++;
            i++;
         }
         compressedstring.push_back(c);
         compressedstring.append(to_string(count));
         c=s[i];
         count=1;
     }
     return(compressedstring);
 }
int main()
{

    cout<<oneway("aaaabbbbccccaaa");
    return 0;
}1