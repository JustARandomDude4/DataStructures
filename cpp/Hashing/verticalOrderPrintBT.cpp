/**
           1
        /    \ 
       2      3
      / \   /   \
     4   5  6   7
               /  \ 
              8   9 
we do preorder traversal    |1,0|{  |2,-1|[ |4,-2|   |5,0| ]   |3,1|[  |6,0|  |7,2|( |8,1|  |9,3| ) ]        
-2,-1,0,1,2,3  are the width difference between nodes
              
The output of print this tree vertically will be:
4
2
1 5 6
3 8
7
9
// can be done using Hashtable. Its the preorder traversal of the bt anyways 
1. Construct a bt
2. Make a func to store the tree's nodes in a hashtable(map) with key being the horizantal distance
   keys=[-2,-1,0,1,2] where they are the horizantal distances from the verticcal lines
3.we need to do linear probing here as keys get repeated. So we need linkedlist(vector) as map's value
4. make a func to print the tree vertically based on keys
 **/


#include <map>
#include<vector>
#include <iostream>

using namespace std;
struct Node
{
   struct Node *left;
   struct Node *right;
    int value;
};
typedef struct Node Node;

Node * newNode(int value)
{
    Node * n=new Node;
    n->value=value;
    n->left=n->right=NULL;
    return n;
}
    
// preorder traversal of tree, push to hashmap with key as width difference(... -2,-1,0,1,2,....)
// remember its | &h | and not | h | in func parameters
void makeHashTable(Node *root,map<int,vector<int>> &ht,int width)
    {
        if(root==NULL)
          return;

        ht[width].push_back(root->value);
        makeHashTable(root->left,ht,width-1);
        makeHashTable(root->right,ht,width+1);
    }
    
void printVerticalOrder(Node* root)
{
    map<int,vector<int>> ht;   //declare a hashtable(map) key:width  value:dynamic array
    int width=0;
    
    makeHashTable(root,ht,width); //creates hasahtable with key as width
    
    //now iterate over hashtable to print Vertical order
    
    map<int,vector<int>> :: iterator i;  //iterator of type:hashtable, returns a pointer to pair of map
   
    for(i=ht.begin(); i!=ht.end(); i++)
     {    
         for(int j=0; j<i->second.size(); j++)
            cout<< i->second[j] <<" ";
         cout<<endl;
     }
}
/* leetcode edition myversion // wrong answer

class Solution {
public:
    void makeHashTable(TreeNode *root,map<int,vector<int>> &ht,int width)
    {
        if(root==NULL)
          return;

        ht[width].push_back(root->val);
        makeHashTable(root->left,ht,width-1);
        makeHashTable(root->right,ht,width+1);
    }
    
    vector<vector<int>> verticalTraversal(TreeNode* root) {
    
    
    map<int,vector<int>> ht;   //declare a hashtable(map) key:width  value:dynamic array
    int width=0;
    
    makeHashTable(root,ht,width); //creates hasahtable with key as width
    
    //now iterate over hashtable to print Vertical order
    
    map<int,vector<int>> :: iterator i; //iterator of type:hashtable, returns a pointer to pair of map
   vector <vector<int>> output;

        for(i=ht.begin(); i!=ht.end(); i++)
     {    
         vector <int> a;
         for(int j=0; j<i->second.size(); j++)
            a.push_back(i->second[j]);
        sort(a.begin(),a.end());
         output.push_back(a);

     }
        
        return output;

    }
};

*/


int main()
{
    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    root->right->left->right = newNode(8);
    root->right->right->right = newNode(9);
    cout << "Vertical order of the bt is :\n";
    printVerticalOrder(root);
    return 0;
}