#include <iostream>
#include<vector>
#include<unordered_map>
using namespace std;

signed main()
{
    // take an array of numbers
    int arr[]={1,5,3,3,4,1,3};
    unordered_map<int,int> freq;    // returns 
    
    //add frequency of elements(key) to freq(unordered map)
    for(auto i:arr)
      freq[i]++;
    //iterate over the elements to print frequency
    
    unordered_map<int,int>::iterator it;
    
    for(it=freq.begin();it!=freq.end();it++)
      cout<<"digit: "<<it->first<<" freq: "<<it->second<<endl;
      
    
return 0;
}