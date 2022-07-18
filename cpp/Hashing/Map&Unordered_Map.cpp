#include <iostream>
#include<vector>
#include<map>
#include<unordered_map>
using namespace std;

signed main()
{
    map <int,int> m;
    m[1]=10;  // key: 1  value:10
    cout<<m[1]<<endl;
    
    unordered_map<int,int> um;
    // returns an iterator of a <pair> pointer
    
    //insert
    um[1]=50;   //1
    cout<<um[1]<<endl;
    
    um.insert(make_pair(20,123)); //2
    cout<<um[20]<<endl;
    
    //find
    if(um.find(12)==um.end())
      cout<<"not found"<<endl;
    else
      cout<<"found"<<endl;
      
    //iterate
    unordered_map<int,int>:: iterator i;  //:: while declaring an iterator
    
    for(i=um.begin();i!=um.end();i++)
      cout<<"key: "<<i->first<<" value: "<<i->second<<endl;
      
return 0;
}