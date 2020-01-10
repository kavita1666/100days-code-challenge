//insertion at starting of list

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
    struct node * head=NULL,*mov,*kavi;

    cin>>start;
    head=newnode(start);
    mov=head;
    while(n--)
    {
        cin>>k;
        mov->next=newnode(k);
        mov=mov->next;
    }
    int insert_first;
    cin>>insert_first;
    kavi=newnode(insert_first);
    kavi->next=head->next;
    head->next=kavi;

    while(head!=NULL)
    {
        if(head->next!=NULL)
        cout<<head->key<<"->";
        else
        cout<<head->key;
        head=head->next;
    }

}

