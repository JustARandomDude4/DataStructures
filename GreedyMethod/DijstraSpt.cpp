#include <bits/stdc++.h>
using namespace std;
#define nV 9
#define INF 9999
int  findMinKeyIndex(int * dist,bool * sptSet)
{
    int min=INF, minIndex;
    
    for(int i=0;i<nV;i++)
    {
        if (dist[i]<min && sptSet[i]==false) //vertex's key is min as well as its not present in sptSet
        {
            min=dist[i]; minIndex=i;
        }
    }
    return minIndex;
}
void updatedist(int *dist,int u,int graph[nV][nV], bool *sptSet)
{
       for (int v = 0; v < nV; v++)
 
            // Update dist[v] only if is not in sptSet, there is an edge from
            // u to v, and total weight of path from src to  v through u is
            // smaller than current value of dist[v]
            if (!sptSet[v] && graph[u][v] && dist[u] != INF
                && dist[u] + graph[u][v] < dist[v])
                dist[v] = dist[u] + graph[u][v];
    
}
void spt(int graph[nV][nV],int src)
{
    // first i gotta create a vertex matrix along with their dist
    //initially, initialise all dist to INF 
    
    int dist[nV] ;// to keep track of distances that are included inspt
    bool sptSet[nV];
    
    for(int i=0;i<nV;i++)
        {
           dist[i]=INF; 
           sptSet[i]=false;
        }
    dist[src]=0; //  to take the first vertex in  mst as 0
    
    for(int i=0;i<nV-1;i++)   // until all vertices are covered
    {
      int minKeyIndex=findMinKeyIndex(dist,sptSet);   //find the min Key 
      sptSet[minKeyIndex]=true;                     // now add that vertex to sptSet
      updatedist(dist,minKeyIndex,graph,sptSet);            // update the dist of adjacent vertexes of min Key Vertex
      
    }
    
    // Now print the mst edges
    
         cout <<"Vertex \t Distance from Source" << endl;
        for (int i = 0; i < nV; i++)
            cout  << i << " \t\t"<<dist[i]<< endl;


    
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
    
    int graph[nV][nV] = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 },
                        { 4, 0, 8, 0, 0, 0, 0, 11, 0 },
                        { 0, 8, 0, 7, 0, 4, 0, 0, 2 },
                        { 0, 0, 7, 0, 9, 14, 0, 0, 0 },
                        { 0, 0, 0, 9, 0, 10, 0, 0, 0 },
                        { 0, 0, 4, 14, 10, 0, 2, 0, 0 },
                        { 0, 0, 0, 0, 0, 2, 0, 1, 6 },
                        { 8, 11, 0, 0, 0, 0, 1, 0, 7 },
                        { 0, 0, 2, 0, 0, 0, 6, 7, 0 } };
 
    // Print the solution
    spt(graph,0);
 
    return 0;
}