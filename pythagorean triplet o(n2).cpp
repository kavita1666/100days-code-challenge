// pythagorean triplet in o(n3) complexity
//input: 5 4 2 3

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,c;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];

    for(int i=0;i<n;i++) {
        a[i]=a[i]*a[i];
    }
    for(int i=0;i<n;i++)
    {cout<<a[i]<<" ";}
    cout<<endl;
    sort(a,a+n);
    for(int i=0;i<n;i++)
        {cout<<a[i]<<" ";}
    cout<<endl;
    for(int i=n-1;i>=2;i--){
        int l,r,c=0;
        l=0,r=i-1;
        while(l<r){
            if(a[l]+a[r]==a[i])
                c++;
            else if(a[l]+a[r]<a[i])
                l++;
            else
                r--;
        }
    }
    if(c>0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
