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

void inorder(struct node* root)   //root -> left -> right
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
      
    }
}
int isBST(struct node* root)   //root -> left -> right
{   
    static struct node *prev=NULL;
    if(root!=NULL)
    {
        if(!isBST(root->left) ) {return 0;}   //checking left bt is a bst  //if not, return0

        if(prev!=NULL  && root->data <= prev->data)   {return 0;}
        
        prev=root;
        return isBST(root->right);  //checking if rt BT is BST
    }
    else{return 1;}   //an empty tree is a bst so return 1
}


struct node* search(struct node* root,int key)
{
    if(root==NULL)             return(NULL);
    if(root->data==key)        return root;
    else if(root->data > key)  return search(root->left,key);
    else                       return search(root->right,key);
}

struct node* searchIter(struct node* root,int key)
{
    while(root!=NULL)
    {             
    if(root->data==key)        return root;
    else if(root->data > key)  root=root->left;
    else                       root=root->right;

    }
    return NULL;
}

void insert(struct node* root,int key)
{
    struct node* prev=NULL;

    while(root!=NULL)
      {
          prev=root;
          if(key==root->data)         { printf("\n Can't insert %d already there in bst",key);
                                        return ;}
          else if (key < root->data)    root=root->left;
          else                          root=root->right;
      }
          struct node* new=createNode(key);
          if(key< prev->data)    prev->left=new;
          else                   prev->right=new;
}
// Inorder Pre  is the  left subtree's right  most child.
struct node* inOrderPre(struct node * root)
{
    root=root->left;
    while(root->right != NULL)    { root=root->right;  }
    return root;   
}

struct node* delete(struct node* root, int v)
{   struct node* iPre;
    //root condition of reccursion
    if(root==NULL)                        {return NULL;}

    // If we reach the to be deleted leaf node
    if(root->left==NULL && root->right==NULL)   { free(root); return NULL;}

    //search for the node to be deleted
    if(v < root->data)        { root->left = delete(root->left,v); }
    else if(v < root->data)   { root->right = delete(root->right,v); }
    else                      //found the element   to be deleted then       
    {
        iPre=inOrderPre(root);
        root->data = iPre->data;           //copying the iPre to the deleting place
        root->left = delete(root->left,iPre->data);    //now we delete the iPre data from root->left branch
               
    }
    return root;
    
}

int main()
{
    struct node* p=createNode(5);
    struct node* p1=createNode(3);
    struct node* p2=createNode(6);
    struct node* p3=createNode(1);
    struct node* p4=createNode(4);
    
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;

 //   preorder(p);
   // printf("\n");
    // postorder(p);

    printf("\n");
    inorder(p);
    printf("\n");
    printf("%d",isBST(p));

    struct node* n=search(p,1);
    if(n!=NULL)  {printf("element found");}
    else         {printf("element not found");}

    insert(p,6);

    struct node* m=searchIter(p,10);
    if(m!=NULL)  {printf("element found");}
    else         {printf("\nelement not found");}

    printf("\n");
    inorder(p);

    delete(p,1);

    printf("\n");
    inorder(p);
    return 0;
}