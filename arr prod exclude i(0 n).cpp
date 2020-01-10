#include<iostream>
using namespace std;
main(){
    int n;
    cin>>n;
    int a[n],l[n],r[n],prod[n];
    for(int i=0;i<n;i++) cin>>a[i];

    l[0]=1;
    for(int i=1;i<n;i++){
        l[i]=l[i-1]*a[i-1];
    }

    r[n-1]=1;
    for(int i=n-2;i>=0;i--){
        r[i]=r[i+1]*a[i+1];
    }

    for(int i=0;i<n;i++){
        prod[i]=l[i]*r[i];
    }
    for(int i=0;i<n;i++){
        cout<<prod[i]<<" ";
    }
    return 0;
}
