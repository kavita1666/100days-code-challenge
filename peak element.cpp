// peak element in array

#include<iostream>
using namespace std;
main()
{
    int n,c=-1;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];

    for(int i=0;i<n;i++)
    {
        if(i==0 && a[i]>a[i+1])
        c=max(c,a[i]);
        else if(i==n-1&& a[i]>a[i-1])
        c=max(c,a[i]);
        else if(a[i]>a[i+1] && a[i]>a[i-1])
        c=max(c,a[i]);
    }
    if(c>0)
        cout<<c<<endl;
    else
        cout<<-1<<endl;
    return 0;
}
