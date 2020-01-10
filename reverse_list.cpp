//reverse elements of linked list

#include<iostream>
using namespace std;
struct node{
    int data;
    struct node * next;
};

struct node * newnode(int data)
{
    struct node * temp=new node;
    temp->data=data;
    temp->next=NULL;
};

main()
{
    int n,start,k;
    cin>>n;
    struct node * head=NULL,*mov,*current,*prev;
    cin>>start;
    head=newnode(start);
    mov=head;
    while(n--)
    {
        cin>>k;
        mov->next=newnode(k);
        mov=mov->next;
    }
    mov=head->next;

    current=head->next;
    head->next=NULL;
    while(current!=NULL)
    {
        prev=current;
        current=current->next;
        prev->next=head;
        head=prev;
    }

    while(head!=NULL)
    {
        if(head->next!=NULL)
        cout<<head->data<<"->";
        else
        cout<<head->data;
        head=head->next;
    }
}
