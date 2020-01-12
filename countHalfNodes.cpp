//Nodes having only one child node(either left child or right child) are called half nodes in binary tree.

#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* left,*right;
};

struct Node* newNode(int data)
{
    struct Node *node=new Node;
    node->data=data;
    node->left=node->right=NULL;
    return(node);
}

int gethalfCount(Node* root)
{
    if(root==NULL)return 0;

    int c=0;
    if(root->left==NULL && root->right!=NULL || root->left!=NULL && root->right==NULL)c++;
    c += gethalfCount(root->left)+gethalfCount(root->right);
    return c;
}

int main() {
    struct Node *root=newNode(2);
    root->left     = newNode(7);
    root->right     = newNode(5);
    root->left->right = newNode(6);
    root->left->right->left = newNode(1);
    root->left->right->right = newNode(11);
    root->right->right = newNode(9);
    root->right->right->left = newNode(4);

    cout << gethalfCount(root);
	return 0;
}


