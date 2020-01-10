
//add 1 to no
//input: 1->9->9->9
//output: 2->0->0->0

#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node * next;
};
struct node * newnode(int val)
{
    struct node * temp = new node;
    temp->data=val;
    temp->next=NULL;
};
struct node * reverseList(struct node * head){
    struct node * curr,*prev;
    curr=head->next;
    head->next=NULL;
    while(curr!=NULL){
        prev=curr;
          curr=curr->next;
        prev->next=head;
        head=prev;
    }
    return head;
};
main()
{
    int n,k,start;
    cin>>n;
    struct node * head=NULL,*mov,*mov1;

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
    while(mov!=NULL)
    {
        if(mov->next!=NULL)
        cout<<mov->data<<"->";
        else
        cout<<mov->data;
        mov=mov->next;
    }
    cout<<endl;
    head=reverseList(head);
    mov=head;
    while(mov!=NULL)
    {
        if(mov->next!=NULL)
        cout<<mov->data<<"->";
        else
        cout<<mov->data;
        mov=mov->next;
    }
    cout<<endl;
    mov=head;
    bool c=true;
    while(mov!=NULL)
    {
        if(c)
        {
            mov->data++;
            if(mov->data>9)
            {
                mov->data=0;
                c=true;
            }
            else
            {
                c=false;
            }
        }
        else ;
        if(mov->next==NULL and c)
        {
            mov->next=newnode(1);
            break;
        }
        mov=mov->next;
    }
    head=reverseList(head);
    mov=head;
    while(mov!=NULL)
    {
        if(mov->next!=NULL)
        cout<<mov->data<<"->";
        else
        cout<<mov->data;
        mov=mov->next;
    }

    return 0;
}

