#include<bits/stdc++.h>
#include<iostream>
using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll a[n];
        for(ll i=0;i<n;i++)cin>>a[i];

        sort(a,a+n);

        a[0]=a[0]+k;
        if(a[n-1]-a[0] >=-k && a[n-1]-a[0]<=k)
            cout<<a[0]<<endl;
        else
            cout<<"-1"<<endl;

    }
    return 0;
}
