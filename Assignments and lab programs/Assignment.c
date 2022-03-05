


/*typedef struct 
{
    char name;
    int NoOfItems;
    int itemNo[];  //an array of all the itemnos

}Customer;

int testCondition(int t)
{
    if(t>2&&t<10)   { return 1;}
    else            {return 0;}
}
int NoOfItemsPurchased(int CustomerNo,Customer *s)
{
    return(s[CustomerNo].NoOfItems);
}
int NoOfCustomersBuyingItem(int item,Customer *s,int No)
{   int n=0;
    for(int i=0;i<No;i++)
    {
        if(s[i].itemNo[item-1]==1)
        {
            n++;
        }
     }
return n;}

int main()
{  int n;
  printf("ENTER NO OF CUSTOMERS: \n");
  scanf("%d",&n);
  Customer s[n];

  for(int i=0;i<n;i++)
  {
      printf("Enter customer %d details: \n",i+1);
      printf("Enter name: ");
      scanf("%s",&s[i].name);
      printf("Enter No of items bought: ");
      scanf("%d",&s[i].NoOfItems);
      if(testCondition(s[i].NoOfItems))
      {   printf("If u bought that item, enter 1 else enter 0 \n");
          for(int j=0;j<s[i].NoOfItems;j++)
          {
              printf("Item %d:",j+1); scanf("%d",&s[i].itemNo[j]);
          }
      } 
      else
      {printf("To make a purchase  a minimum of 3 and maximum of 9 items of the same type should be purchased\n");}
  }
  int u;int no;
  printf("What do u wanna know about the customer info?\n");
  printf("1. No of items bought by a particular customer\n2. No of customers that bought a particular items\n");
  scanf("%d",&u);

  switch(u)
  {
  case 1:  printf("Enter the customer no:\n"); scanf("%d",&no);
           printf("No of items purchased by Customer %d is\n",no,NoOfItemsPurchased(no,s));
           break;
  case 2:  printf("Enter the item no:\n"); scanf("%d",&no);
           printf("No of customers that purchased the item %d are \n",no,NoOfCustomersBuyingItem(no,s,n));
           break;
  default: printf("Invalid input\n");
  }
}
/*
/*















int main()
{
    int r,c;
printf("Enter the size of array :\n");
printf("Enter no of rows:\n");
scanf("%d",&r);
printf("Enter no of columns:\n");
scanf("%d",&c);
char matrix[r][c];
for(int i=0;i<r;i++)
{
    for(int j=0;j<c;j++)
    {
        if(i==0 ||i==(r-1) ||j==0 ||j==c-1)   { matrix[i][j]='X';printf("X ");  }
        else                                  {matrix[i][j]='O';printf("O "); }
    }
    printf("\n");
}
}*/