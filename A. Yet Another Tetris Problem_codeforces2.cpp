#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,even=0,odd=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];

        for(int i=0;i<n;i++)
        {
            if(a[i]%2==0)
                even++;
            else
                odd++;
        }
        if(even==0 || even==n)
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
