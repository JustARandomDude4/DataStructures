#include <bits/stdc++.h>
using namespace std;
#define nV 5
#define INF 9999
int  findMinKeyIndex(int * keys,bool * mstSet)
{
    int min=INF, minIndex;
    
    for(int i=0;i<nV;i++)
    {
        if (keys[i]<min && mstSet[i]==false) //vertex's key is min as well as its not present in mstSet
        {
            min=keys[i]; minIndex=i;
        }
    }
    return minIndex;
}
void updateKeys(int *keys,int ver,int graph[nV][nV],int *parent, bool *mstSet)
{
    for (int i = 0; i < nV; i++)
            if (graph[ver][i] && mstSet[i] == false && graph[ver][i] < keys[i])
                parent[i] = ver, keys[i] = graph[ver][i];
}
void primMst(int graph[nV][nV])
{
    // first i gotta create a vertex matrix along with their keys
    //initially, initialise all keys to INF 
    
    int keys[nV];
    int parent[nV]; // to keep track of edges that are included in mst
    bool mstSet[nV];
    
    for(int i=0;i<nV;i++)
        {
           keys[i]=INF; 
           parent[i]=-1;
           mstSet[i]=false;
        }
    keys[0]=0; //  to take the first vertex in  mst as 0
    parent[0]=-1;
    
    for(int i=0;i<nV-1;i++)   // until all vertices are covered
    {
      int minKeyIndex=findMinKeyIndex(keys,mstSet);   //find the min Key 
      mstSet[minKeyIndex]=true;                     // now add that vertex to mstSet
      updateKeys(keys,minKeyIndex,graph,parent,mstSet);            // update the keys of adjacent vertexes of min Key Vertex
      
    }
    
    // Now print the mst edges
    int totalWeight=0;
    cout<<"Edges \tWeight\n";
    for (int i = 1; i < nV; i++)
    {
        totalWeight+=graph[i][parent[i]];
        cout<<parent[i] <<" - " <<i <<" \t" <<graph[i][parent[i]]<<"\n" ;
    }

    
    // Now print  total wt of mst
    cout<< "\ntotal weight of the mst :  " <<totalWeight;
}
int main()
{
    /* Let us create the following graph
        2    3
    (0)--(1)--(2)
    | / \ |
    6| 8/ \5 |7
    | / \ |
    (3)-------(4)
         9         */
    int graph[nV][nV] = { { 0, 2, 0, 6, 0 },
                        { 2, 0, 3, 8, 5 },
                        { 0, 3, 0, 0, 7 },
                        { 6, 8, 0, 0, 9 },
                        { 0, 5, 7, 9, 0 } };
 
    // Print the solution
    primMst(graph);
 
    return 0;
}