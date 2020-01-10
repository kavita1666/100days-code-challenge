
//insertion between any node in list

#include<bits/stdc++.h>
using namespace std;
struct node
{
    int key;
    struct node * next;
};
struct node * newnode(int val)
{
    struct node * temp = new node;
    temp->key=val;
    temp->next=NULL;
};
main()
{
    int n,k,start;
    cin>>n;
    struct node * head=NULL,*mov,*insertN;

    cin>>start;
    head=newnode(start);
    mov=head;
    while(n--)
    {
        cin>>k;
        mov->next=newnode(k);
        mov=mov->next;
    }

    int data,pos;
    cin>>data>>pos;
    insertN=newnode(data);
    mov=head;
    for(int i=1;i<pos-1;i++)
        mov=mov->next;

    insertN->next=mov->next;
    mov->next=insertN;

    while(head!=NULL)
    {
        if(head->next!=NULL)
        cout<<head->key<<"->";
        else
        cout<<head->key;
        head=head->next;
    }

}
