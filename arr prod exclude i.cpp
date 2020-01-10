#include<iostream>
using namespace std;
main(){
    int n;
    cin>>n;
    int a[n],b[n]={0},i,j,k;
    for(int i=0;i<n;i++) cin>>a[i];

    for(int i=0;i<n;i++){
            int prod=1;
        for(int j=0;j<n;j++){
            if(i==j)
                continue;
            else
                prod=prod*a[j];
        }
    b[i]=prod;
    }

    for(k=0;k<n;k++)
     {
         cout<<b[k]<<" ";
     }

    return 0;
}
