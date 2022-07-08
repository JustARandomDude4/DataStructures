#include <stdio.h>

//input : total obj, knapsack cap , weights, profits
//output : total value

//sort values by an obj's p/w and with respective to that arrange their weights and profits as well
void sort(double * pByw,int *w, int* p,int n)  //selection sort
{
    for(int i=0;i<n-1;i++)
    {
        int maxIndex=i;
        for(int j=i+1;j<n;j++)
            if(pByw[j]>pByw[maxIndex])
              {
                  int temp=pByw[j];
                  pByw[j]=pByw[maxIndex];
                  pByw[maxIndex]=temp;
                  
                  temp=w[j    //arranging weights wrt pByw
                  w[j]=w[maxIndex];
                  w[maxIndex]=temp;
                  
                  temp=p[j];  //arranging profits wrt pByw
                  p[j]=p[maxIndex];
                  p[maxIndex]=temp;
              }
    }
}
double KnapSack(int *w, int *p, int n, int kC)
{  
    double pByw[n];            //  to store profit/weight 
    for(int i=0;i<n;i++)       //calculating p/w values for each obj
    pByw[i]=(double)p[i]/(double)w[i]; 
    
    sort(pByw,w,p,n);           //sort by p/w and also arrange their weights and profits respective to them
    
    double currCap=kC;          // to store the remaining capacity
    double totalP=0;            // total maximumised  profits made
    double fractions[n];        //to store how much of the obj is taken
    int i=0;
    
    while(currCap)  // loops until capacity is exceeded
        {

            if(w[i]<=currCap)   // if the total object can be taken is 
            {
                currCap-=w[i];
                totalP+=p[i];
                fractions[i]=1;
            }
            else               // if only fraction of object can be considered or no obj can be considered
            {
                fractions[i]=currCap/w[i];
                currCap-=w[i]*fractions[i];
                totalP+=p[i]*fractions[i];
            }
            i++;
        }
        
        return totalP;  // return the max profit made
    
}
int main()
{
    int n, kC;
    printf("Enter the total no of objects\n");
    scanf("%d",&n);
    printf("Enter the Maxmimum Knapsack Capacity\n");
    scanf("%d",&kC);
    
    int w[n],p[n];
    printf("Enter the weights of objects :\n");
    for(int i=0;i<n;i++)
    scanf("%d",&w[i]);
    printf("Enter the profits of objects:\n");
    for(int i=0;i<n;i++)
    scanf("%d",&p[i]);
    
    printf("The Maximum Profit that is obtained is %f",KnapSack(w,p,n,kC));
    
    
    
    return 0;

}
