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

    struct node *head2,*even;
    even=head->next->next;
    head2=newnode(even);
    int i;
    while(mov!=NULL)
    {
        for(i=1;i<=n && mov!=NULL;i++){
            if(i%2!=0){
                mov->next=even->next;
                mov=even->next;
            }
        }
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



