//program to rotate array of n size by d elements.
//eg. array a[7]={1,2,3,4,5,6,7}
//rotate array by 2 elements
//output: a[7]={3,4,5,6,7,1,2}

#include<iostream>
using namespace std;

void shiftLeftByOne(int a[],int n)
{
    int temp=a[0],i;
    for(i=0;i<n-1;i++)
        a[i]=a[i+1];

    a[i]=temp;
}
void shiftBack(int a[],int n,int d)
{
    for(int i=0;i<d;i++)
        shiftLeftByOne(a,n);
}
int main()
{
    int n;//length of array
    cin>>n;
    int a[n];//array of n size
    for(int i=0;i<n;i++)cin>>a[i];
    int d;//rotation by d elements
    cin>>d;

    shiftBack(a,n,d);

    //print array
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
