#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node* next;
    int data;
};

struct node* insert(struct node* s[],int index,int data)
{
    struct node* ptr=(struct node *)malloc(sizeof(struct node)); //kotta node
    ptr->data=data;
    ptr->next=s[index+1];
    s[index-1]->next=ptr;

}

struct node* delete(struct node* s[],int index)
{
    s[index-1]->next=s[index+1];
    free(s[index]);
}

struct node* traversal(struct node* s[])
{   int i=0;
    while(s[i]->next!=NULL)
    {printf("%d\n",s[i]->data); i++;}
}
int main()
{   printf("enter the number of elements of linked list u want");
    int n;
    scanf("%d",&n);
    struct node* s[10];
    printf("enter the elements one by one:");

    for(int i=0;i<n;i++)
    {   s[i]=(struct node*)malloc(sizeof(struct node));
        int d;
        scanf("%d",&d);
        s[i]->data=d;
        if(i!=n)
        s[i]->next=s[i+1];
        else
        s[i]->next=NULL;
    }

    insert(s,2,15);
    delete(s,1);
    traversal(s);


    
    
return 0;}
