//merge lists without forming any new list
//list1: 1->3->5->9
//list2: 1->2->4->5
//final list: 1->1->2->3->4->5->5->9

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
struct node* mergeTwoLists(node* l1, node* l2) {
        node* head,*curr,*p;
        if(l1==NULL)return l2;
        if(l2==NULL)return l1;
        if(l1->data <= l2->data)
        {
            head=l1;
            l1=l1->next;
        }
        else
        {
            head=l2;
            l2=l2->next;
        }
        p=head;
        while(l1 && l2)
        {
            if(l1->data < l2->data)
            {
                p->next=l1;
                l1=l1->next;
            }
            else
            {
                p->next=l2;
                l2=l2->next;
            }
            p=p->next;
        }
        if(l1)p->next=l1;
        else
            p->next=l2;

        return head;
    };
main()
{
    int a,b,k,start1,start2;
    cin>>a>>b;
    struct node * l1=NULL,*l2=NULL,*mov,*res=NULL;

    cin>>start1;
    l1=newnode(start1);
    mov=l1;
    while(a--)
    {
        cin>>k;
        mov->next=newnode(k);
        mov=mov->next;
    }
    mov=l1;
    while(mov!=NULL)
    {
        if(mov->next!=NULL)
        cout<<mov->data<<"->";
        else
        cout<<mov->data;
        mov=mov->next;
    }
    cout<<endl;

    cin>>start2;
    l2=newnode(start2);
    mov=l2;
    while(b--)
    {
        cin>>k;
        mov->next=newnode(k);
        mov=mov->next;
    }
    mov=l2;
    while(mov!=NULL)
    {
        if(mov->next!=NULL)
        cout<<mov->data<<"->";
        else
        cout<<mov->data;
        mov=mov->next;
    }
    cout<<endl;

    res=mergeTwoLists(l1,l2);
    mov=res;
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


