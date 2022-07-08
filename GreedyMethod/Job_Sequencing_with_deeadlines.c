//#include <stdio.h>

//input : total jobs, profits in decreasing order , deadlines
//output : sequence of jobs

int maxDeadline(int *a,int n)  // Finds the highest deadline available in the input to allot the slots
{
    int max=a[0];

    for(int i=1;i<n;i++)
        if(a[i]>max)
           max=a[i];

    return max;
}
int AllotSlot(int * slots,int deadLine, int JobNo)   // checks whether a free slot is available or not, if yes, then allots it tot the current Job
{
    for(int i=deadLine-1;i>=0;i--)  // checks from deadline slot to previous slots if they r empty
    {
            if (slots[i]==-1)  
               {
                   slots[i]=JobNo; // allocating  the found free slot to the given Jobfound 
                   return 1;
                }
    }
return -1;
}

int JobSequencingWithDeadLines(int n, int *d, int *p)  
{  
    int m=maxDeadline(d,n);  // finds the no of slots available
    int slots[m];
    for(int i=0;i<m;i++)   // initially, no slot is allocated to any slot so initialise to -1
    slots[i]=-1;
    
    for(int i=0;i<n;i++)   // allocate slots to all the jobs
    {
        AllotSlot(slots,d[i],i+1);   // if slot is available, allocates else, returns -1
    }
    
    for(int i=0;i<m;i++)  // printing the job sequence
    if(slots[i]!=-1)
    printf(" J%d ",slots[i]);
    
    
}
int main()
{
    int n, kC;
    printf("Enter the total no of jobs\n");
    scanf("%d",&n);
    
    
    int d[n],p[n];
    printf("Enter the deadlines of jobs :\n");
    for(int i=0;i<n;i++)
    scanf("%d",&d[i]);
    printf("Enter the profits of jobs:\n");
    for(int i=0;i<n;i++)
    scanf("%d",&p[i]);
    
    
    printf("The sequence of jobs that is obtained is : ");
    JobSequencingWithDeadLines(n,d,p);
    
    return 0;
}
