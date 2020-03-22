#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];

    bool check=true;
    int mid=n/2;
    for(int i=0,j=n-1;i<=mid,j>mid;i++,j--){
        if(a[i]!=a[j])
            check=false;
        else
            continue;
    }
    if(check==false)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
    return 0;
}
