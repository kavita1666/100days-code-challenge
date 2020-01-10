
#include <bits/stdc++.h>
using namespace std;
bool rec(int n,int a[],int sum);
main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0 ; i<n ;i++)
        cin>>a[i];
    if(rec(n-1,a,0)) cout<<"YES";
    else cout<<"NO";
    cout<<endl;
}
bool rec(int n,int a[], int sum){
    if(n==-1)
    {
        if(sum%360==0)
            return true;
        else
            return false;
    }
    return rec(n-1,a,sum+a[n])||rec(n-1,a,sum-a[n]);
}
