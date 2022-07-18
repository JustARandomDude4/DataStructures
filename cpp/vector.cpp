
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> a;
    
    a.push_back(9);
    a.push_back(3);
    a.push_back(12);
    
    cout<<"\n1. ";
    for(int i=0;i<a.size();i++)
      cout<<a[i]<<" ";
      
    cout<<"\n2. ";
    vector<int>::iterator i;  //declare an iterator
    for(i=a.begin();i!=a.end();i++)   //assign the iterator to beginning of array and loop until the end
      cout<<*i<<" ";       // print value pointed by iterator

    cout<<"\n3. ";
    for(auto element:a)  //auto self decides which data type it is
      cout<<element<<" ";
      
    cout<<"\n4. one element popped ";
    a.pop_back();   // [9,3]
    
    cout<<"\n5. ";
    
    vector<int> b(3,5);  // [5,5,5]
    
    swap(a,b);
    
    for(auto ele:a)   //print a after swap
      cout<<ele<<" ";
     cout<<endl<<"   ";
    for(auto ele:b)   //print b after swap
      cout<<ele<<" ";

    cout<<"\n6. "; //sort
    sort(b.begin(),b.end());
    for(auto ele:b)   //print b after sort
      cout<<ele<<" ";

return 0;
}