//replace every element of array with greatest element on the right side,except last element to be replaced with -1
//input: 5
// 16 17 4 5 2
//output: 17 5 5 2 -1
#include<iostream>
using namespace std;
main()
{
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int maxm=0;

    for(int i=n-2;i>=0;i--){
        if(a[i+1]>  maxm)
            maxm=a[i+1];
        b[i]=maxm;
    }
    b[n-1]=-1;
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
    return 0;
}
