#include<iostream>
using namespace std;
main()
{
    int n;
    cin>>n;
    bool a[n],b[n];
    for(int i=0;i<n;i++) cin>>a[i];

        int l=0,r=n-1;
        while(l<n){
            while(a[l]==0 && l<n)
                l++;
            while(a[r]==1 && l<n)
                r--;
            if(l<n)
            {
                a[l]=0;
                a[r]=1;
                l++;
                r--;
            }
        }

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";

    return 0;

}
