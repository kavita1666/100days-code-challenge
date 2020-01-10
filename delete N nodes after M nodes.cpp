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
main()
{
    int nodes,k,start,m,n;
    cin>>nodes;
    struct node * head=NULL,*mov;

    cin>>start;
    head=newnode(start);
    mov=head;
    while(nodes--)
    {
        cin>>k;
        mov->next=newnode(k);
        mov=mov->next;
    }
    mov=head;

    cin>>m>>n;
    struct node *p;
    int i;
    while(mov!=NULL)
    {
        for(i=1;i<m && mov!=NULL ;i++){
            mov=mov->next;
        }
        if(mov==NULL)
            break;

        p=mov->next;
        for(i=1;i<=n && p!=NULL;i++){
            p=p->next;
        }
        mov->next=p;
        mov=p;
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

    return 0;
}


