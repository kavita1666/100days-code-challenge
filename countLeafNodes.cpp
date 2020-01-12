//Nodes having no child are leaf nodes.

#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* left,*right;
};
struct Node* newNode(int data)
{
    struct Node* node=new Node;
    node->data=data;
    node->left=NULL;
    node->right=NULL;
    return(node);
}
int countLeafNodes(Node* root)
{
    if(root==NULL)return 0;
    int c=0;
    if(root->left==NULL && root->right==NULL)c++;

    c += countLeafNodes(root->left)+countLeafNodes(root->right);
    return c;
}
int main()
{
    struct Node* root=newNode(2);
    root->left=newNode(3);
    root->right=newNode(4);
    root->left->left=newNode(5);
    root->left->right=newNode(6);
    root->right->left=newNode(7);
    root->right->right=newNode(8);
    cout<<countLeafNodes(root);
    return 0;
}
