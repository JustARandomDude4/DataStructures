#include <stdio.h>
#include <stdbool.h>
#define V 4

/* checks whether the edge exists or not(i.e, graph[v][i]==1). 
   If exist then checks whether the color to be filled in the new vertex(c isent in the parameter) is already
   used by its adjacent vertices(i-->adj vertices) or   not (i.e, color[i]==c)
*/
bool isSafe(int v,bool graph[V][V],int c, int color[])
{
    for(int i=0;i<V;i++)
     if(graph[v][i] && color[i]==c)
        return false;
    return true;
}

bool graphColoringUtil(bool graph[][],int v, int color[], int m )
{
    //base condition
    if (v==V)
        return true;
    
    //try different colors
    for(int c=0;c<m;c++)
    {
        if(isSafe(v,graph,c,color))
        {
            color[v]=c;

            //recursion and check for other vertices
            if(graphColoringUtil(graph,v+1,color,m))
                return true;
            color[v]=0;
        }
    }
}

bool graphColoring(bool graph[V][V],int m)
{
    int color[V];
    for(int i=0;i<V;i++)
    {
        color[i]=0;
    }

    if(graphColoringUtil(graph, m, color,0))  
    {
        printf(printSolution(color));
        return true;
    }
    else                   printf("No solution exists");

    return false;
}

int main()
{
    bool graph[V][V] = {
        { 0, 1, 1, 1 },
        { 1, 0, 1, 0 },
        { 1, 1, 0, 1 },
        { 1, 0, 1, 0 },
    };
    int m = 3; // Number of colors
    graphColoring(graph, m);
    return 0;

}