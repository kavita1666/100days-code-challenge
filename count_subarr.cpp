//count all strictly increasing subarrays.
//input:3
// 1 2 3
//output: 3         ie. [{1,2},{2,3},{1,2,3]

//input:4
//1 2 2 4
//output: 2          ie. [{1,2},{2,4}]

#include<iostream>
using namespace std;
main()
{
    int n,c=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];

    for(int i=0;i<n-1;i++){
        for(int j=i;j<n-1;j++){
            if(a[j+1]>a[j])
             {
                c++;
                //cout<<a[j+1]<<" " <<a[j]<<endl;
            }
            else
                break;
        }
    }
    if(c>0)
        cout<<c<<endl;
    else
        cout<<-1<<endl;
    return 0;
}
