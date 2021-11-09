#include <stdio.h>
#include <stdlib.h>
// contents :  Sparse Matrices( 1.Diagonal ||2. tridiagnal||3. triangular
//             Symmetric matrix
int main()
{/*  printf("Enter the order of the square matrix");
    int n; scanf("%d",&n);
    int e;

    // 1. Diagonal Matrix    || has n elements || i=j ||
    e=n;
    int a[e];
    printf("Enter the diagonal elements:\n");
    for(int i=0;i<e;i++)     {   scanf("%d",&a[i]);   }
    
    printf("The diagonal matrix is :\n");
    for(int i=0;i<n;i++)
    {  for(int j=0;j<n;j++)
        {
            if (i==j)   {printf("%d ",a[i]);}
            else      {printf("0 ");} 
        }
        printf("\n");
    }

// 2. Tridiagonal Matrix     || has 3n-2 elements|| had 3 diagonals || i=j ,i=j+1 ,i=j-1 || we can store by row or by column or by diagonal ||
    e=3*n-2;
    int b[e];                          
    printf("Enter the row wise elements:\n");
    for(int i=0;i<e;i++)     {   scanf("%d",&b[i]);   }
    int k=0;
    printf("The tri diagonal matrix is :\n");
    for(int i=0;i<n;i++)
    {  for(int j=0;j<n;j++)
        {
            if ( (i-j==0) || (i-j)==1 || (i-j)==-1 )   {printf("%d ",b[k]);k++;}
            else      {printf("0 ");} 
        }
        printf("\n");
    }

//3. Triangular matrix      || has n(n+1)/2 elementss  || i<=j ---Upper    j<=i ---Lower
    e=n*(n+1)/2;
    int c[e];
    printf("Enter the rowwise elements:\n");
    for(int i=0;i<e;i++)     {   scanf("%d",&c[i]);   }
    
    printf("The upper triangular matrix is :\n");
    for(int i=0,k=0;i<n;i++)
    {  for(int j=0;j<n;j++)
        {
            if (i<=j)   {printf("%d ",c[k]);k++;}   
            else      {printf("0 ");} 
        }
        printf("\n");
    }

//4.Symmetric matrix      || has n total elements but stored as triangular matri
    e=n*(n+1)/2;
    int d[e];
    printf("Enter the rowwise elements:\n");
    for(int i=0;i<e;i++)     {   scanf("%d",&d[i]);   }
    
    printf("symmetric  matrix is :\n");
    for(int i=0,k=0,l=0;i<n;i++)
    {  for(int j=0;j<n;j++)
        {
            if (i<=j)   {printf("%d ",d[k]);k++;}   
            else      { printf("%d ",d[l]); l=l+n-k; } 
        }
        printf("\n");
    }
*/
//5. Sparse Matrix 

//1. Have an sparse matrix
//2. find its size
//3. defining the triplet array
//4. generating the triplet array
//5. display of triplet array

    int arr[4][4]={ {1,2,3,0},{0,0,0,0},{5,3,0,0},{0,0,0,8}};  //1.
    int size=0;
    for(int i=0;i<4;i++)
    {
    for(int j=0;j<4;j++)
    {      if(arr[i][j]!=0)  {size++;}     }    //2.
    }
   int sm[3][size];         //3.  as its always a triplet, rows are 3.
    int kk=0;
    for(int i=0;i<4;i++)     //4.
    for(int j=0;j<4; j++)
    { if(arr[i][j]!=0)  
     {
         sm[0][kk]= i;            //storing the row number
         sm[1][kk]= j;            //storing the column element
         sm[2][kk]= arr[i][j];    //storing the value    
         kk++;   
     } 
    }
 
    for(int i=0;i<3;i++)
    {  for(int j=0;j<size;j++)
        {
            printf("%d",sm[i][j]);        //5.
        }
    printf("\n");}

return 0;
}