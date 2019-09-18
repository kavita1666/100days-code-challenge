#include <iostream>
#include<cmath>
using namespace std;
int check_sorted(int n,int a[]);
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    int sorted=check_sorted(n,a);
    cout<<sorted<<endl;

    return 0;
}
int check_sorted(int n,int a[]){
    if(n<=1)
        return 1;
    else
        return (a[n-1] >= a[n-2]?check_sorted(n-1,a):0);
}
