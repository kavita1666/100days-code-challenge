//find a fixed point(in an index i such that a[i]==i ) in a given array(both +ve and -ve num).
//input: 5
// -10 -5 0 3 5
//output:3
//note: return -1 if condition is false.

#include<iostream>
using namespace std;
main()
{
    int n,point =-1;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++) cin>>a[i];

    for(int i=0;i<n;i++){
        if(i==a[i])
            point=i;
        else
            point=point;

    }
    cout<<point<<endl;

    return 0;
}
