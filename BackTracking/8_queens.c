#include <stdio.h>
#include <stdbool.h>
#define N 4

bool isSafe(int board[][],int rowm int col)
{
    for(int i=;i<row;i++)
        if(board[i][col])  return false;
    for(int i=row;j=col;i>=0;j>=0;i--;j--;)
        if(board[row][col])  return false;
    for(int i=row;j=col;i>=N;j>=0;i++;j--;)
        if(board[row][col])  return false;
    return true;
}

bool solveNQUtil(int board[][],int col)
{
    //base condition
    if(col>=N)  return true;

    for(int i=0;i<N;i++)
    {
        if(isSafe(board[i][col]),i))
        {
            board[i]col]=1;

            //reccursion and check for other colulmns
            if(solveNQUtil(int board,col+))
            return true;
            else
            board[i][col]=0;
        }
    }
    reuturn false;
}

bool printSolution(int board[][])
{
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
            printf("%d ",board[i][j]);
        printf("\n");
    }
    return true;
bool solveNQ()
{
    int board={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
    if(solveNQUtil(board,0))
    printSolution(board);
    else
    printf("Solution does not exist");
}

int main()
{
    solveNQ();
    return 0;
}