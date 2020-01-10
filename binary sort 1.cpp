#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main()
{
    int  n;
    cin>>n;
    bool a[n];
    for(int i=0;i<n;i++) cin>>a[i];

    sort(a,a+n);

    int l=0,r=n-1;
    int mid=(l+r)/2;
    for(int i=0;i<mid;i++){
        if(a[i]==1)
            r=mid;
        else
            l=mid;
    }
    if(l=r-1)
        cout<<l+1<<endl;
    return 0;
}
