//insertion at last of list

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
    struct node * head=NULL,*mov,*Lnode;

    cin>>start;
    head=newnode(start);
    mov=head;
    while(n--)
    {
        cin>>k;
        mov->next=newnode(k);
        mov=mov->next;
    }

    mov=head;
    int data;
    cin>>data;
    Lnode=newnode(data);
    while(mov->next!=NULL)
    {
        mov=mov->next;
    }

    mov->next=Lnode;

    while(head!=NULL)
    {
        if(head->next!=NULL)
        cout<<head->key<<"->";
        else
        cout<<head->key;
        head=head->next;
    }

}

