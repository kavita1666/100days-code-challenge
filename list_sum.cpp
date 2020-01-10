//sum of data of linked list

#include<iostream>
using namespace std;
struct node{
    int data;
    struct node * next=NULL;
};

struct node * newnode(int data)
{
    struct node * temp=new node;
    temp->data=data;
    temp->next=NULL;
};
main()
{
    int n,start,sum=0,k;
    cin>>n;
    struct node * head=NULL,*mov;
    cin>>start;
    head=newnode(start);
    mov=head;
    while(n--){
        cin>>k;

        mov->next=newnode(k);
        mov=mov->next;
    }
    mov=head;
    while(mov!=NULL)
    {
        cout<<mov->data<<" ";
        sum+=mov->data;
        mov=mov->next;

    }
    cout<<sum<<endl;
}
