#include<iostream>
using namespace std;

struct Edge  { int src, des; };

struct Graph  { int nV, nE ;  struct Edge *edges; }; // no of vertices, no of edges, then an array of edges of size nE

struct Subset  { int parent, rank; };  // we create subsets while checking for cycles

// func to create a Graph that returns (struct *Graph)
struct Graph* createGraph(int nV, int nE)
{
    struct Graph* graph=(struct Graph*)malloc(sizeof(struct Graph*));
    
    graph->nV= nV;
    graph->nE=nE;
    graph->edges=(struct Edge*)malloc(nE*sizeof(struct Edge*));  // creating nE edges
    
    return graph;
}   

// using path compression by  removing intermediate parents as it causes unneccesary extra traversals
int find(struct Subset ss[],int i)  
{
    if (ss[i].parent != i)
    {
        ss[i].parent = find(ss,ss[i].parent); // find the root and make it the parent of i 
    }
    
    return ss[i].parent;  // if i and parent equal, its then the root
}

// using union by rank : making the high rank root the parent of low rank root
void Union(struct Subset ss[], int xroot, int yroot)
{
    if(ss[xroot].rank > ss[yroot].rank)
        ss[yroot].parent=xroot;
        
    else if(ss[xroot].rank<ss[yroot].rank)
        ss[xroot].parent=yroot;
    
    else         // if the ranks r equal, make any one root the parent and increase its rank
        {
            ss[yroot].parent=xroot;
            ss[xroot].rank+=1;
        }
}
int isCycle(struct Graph* graph)  //here is where u use the  *Union subsets DataStucture* to check cycles
{
    int nV=graph->nV;
    int nE=graph->nE;
    
    // Allocate memory for creating nV sets
    struct Subset* subsets = (struct Subset*)malloc(nV * sizeof(struct Subset));
 
    for (int v = 0; v < nV; ++v) 
    {
        subsets[v].parent = v;
        subsets[v].rank = 0;
    }
    
    //Now take all edges and iterate through all edges, find the the parents of 2 vertices in the edge and see if they r same or not
    
    for(int i=0;i<nE;i++)
    {
        int x= find(subsets, graph->edges[i].src);
        int y=find(subsets,graph->edges[i].des);
        
        if (x==y) // if parents are equal
            return 1;    // then cycle exists
        else
            Union(subsets,x,y);
    }
    
    return 0;
}
int main()
{
    /* Let us create the following graph
         0
        |  \
        |    \
        1-----2 */
 
    int V = 3, E = 3;
    struct Graph* graph = createGraph(V, E);
 
    // add edge 0-1
    graph->edges[0].src = 0;
    graph->edges[0].des = 1;
 
    // add edge 1-2
    graph->edges[1].src = 1;
    graph->edges[1].des = 2;
 
 
    if (isCycle(graph))
        cout << "Graph contains cycle";
    else
        cout << "Graph doesn't contain cycle";
 
    return 0;
}