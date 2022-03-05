#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node* left;
    int data;
    struct node* right;
};


struct node* createNode(int v)
{
    struct node *p;   
    p=(struct node *) malloc(sizeof(struct node));
    p->data=v;
    p->left=NULL;
    p->right=NULL;

    return p;
}

void preorder(struct node* root)   //root -> left -> right
{
    if(root!=NULL)
    {
        printf("%d",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(struct node* root)   //root -> left -> right
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d",root->data);
    }
}

void inorder(struct node* root)   //root -> left -> right
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d",root->data);
        inorder(root->right);
      
    }
}

int main()
{
    struct node* p=createNode(2);
    struct node* p1=createNode(3);
    struct node* p2=createNode(4);
    struct node* p3=createNode(5);
    struct node* p4=createNode(6);
    struct node* p5=createNode(7);

    p->left=p1;
    p->right=p2;
    p->left=p3;
    p->right=p4;

    preorder(p);
    printf("\n");
    postorder(p);

    printf("\n");
    inorder(p);
    return 0;
}