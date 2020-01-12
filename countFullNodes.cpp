//nodes having both left and right child in a binary tree is called full nodes
//RECURSIVE METHOD

#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* left,*right;
};
struct Node* newNode(int data)
{
    struct Node* root=new Node;
    root->data=data;
    root->left=root->right=NULL;
    return(root);
};
int countFullNodes(Node* root)
{
    if(root==NULL)return 0;
    int c=0;
    if(root->left!=NULL && root->right!=NULL)c++;
    c += countFullNodes(root->left)+countFullNodes(root->right);
    return c;
}
int main()
{
    struct Node* root=newNode(1);
    root->left     = newNode(7);
    root->right     = newNode(5);
    root->left->left     = newNode(7);
    root->left->right    = newNode(5);
    root->right->left     = newNode(7);
    root->right->right    = newNode(5);
    root->left->right->left    = newNode(5);

    cout<<countFullNodes(root)<<endl;
    return 0;
}
