//basic structure

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
    int n1,n2,i,j,start1,start2;
    cin>>n1>>n2;
    struct node * head1=NULL,*head2=NULL,*mov,*p2,*p1,*head3;
    cin>>start1;
    head1=newnode(start1);
    mov=head1;
    while(n1--)
    {
        cin>>i;
        mov->next=newnode(i);
        mov=mov->next;
    }
    mov=head1;
    while(mov!=NULL)
    {
        if(mov->next!=NULL)
        cout<<mov->key<<"->";
        else
        cout<<mov->key;
        mov=mov->next;
    }
    cout<<endl;
    cin>>start2;
    head2=newnode(start2);
    mov=head2;
    while(n2--)
    {
        cin>>j;
        mov->next=newnode(j);
        mov=mov->next;
    }
    mov=head2;
    while(mov!=NULL)
    {
        if(mov->next!=NULL)
        cout<<mov->key<<"->";
        else
        cout<<mov->key;
        mov=mov->next;
    }
    cout<<endl;
    p1=head1;
    p2=head2;
    if(p1->key < p2->key)
    {
        head3=newnode(p1->key);
        p1=p1->next;
    }
    else
    {
        head3=newnode(p2->key);
        p2=p2->next;
    }
    mov=head3;
    while(true)
    {
        if(p1==NULL)
        {
            mov->next=p2;
            break;
        }
        if(p2==NULL)
        {
            mov->next=p1;
            break;
        }
        if(p1->key<p2->key)
        {
            mov->next=newnode(p1->key);
            mov=mov->next;
            p1=p1->next;
        }
        else
        {
            mov->next=newnode(p2->key);
            mov=mov->next;
            p2=p2->next;
        }
    }
    mov=head3;
    while(mov!=NULL)
    {
        if(mov->next!=NULL)
        cout<<mov->key<<"->";
        else
        cout<<mov->key;
        mov=mov->next;
    }

    cout<<endl;
    return 0;

}

