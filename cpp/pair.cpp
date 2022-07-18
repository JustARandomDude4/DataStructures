
#include <bits/stdc++.h>
#include <iostream>
#include<vector>
using namespace std;

bool myCompare(pair<int,int> p1,pair<int,int> p2)
{
    return(p1.first<p2.first);
}

int main()
{
    pair<int,char> p;
    
    p.first=1;
    p.second='a';
    
    //example 
    //convert [9,2,1,6,3]  -> represent element with its asending order index -> [4,1,0,3,2]
    //as after sorting, i wont be able to retain the indexes
    int arr[]={9,2,1,6,3};
    vector<pair<int,int>> v;
    
    for(int i=0;i<5;i++)
      v.push_back(make_pair(arr[i],i));
    
    sort(v.begin(),v.end(),myCompare);
    
    for(auto ele:v)
      cout <<ele.first<<" "<<ele.second<<"\n";
return 0;
}