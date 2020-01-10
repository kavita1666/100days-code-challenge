//Generate all the binary strings of N bits
//eg, input:2
//output: 00, 01, 10, 11
//input:3
//output: 000, 001, 010, 011, 100, 101, 110, 111

#include <iostream>
#include<cmath>
using namespace std;
void binary_string(int n,int a[]);
void printArray(int n,int a[]){
    for(int i=sizeof a -2 ; i>=0;i--){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    int a[n];

    binary_string(n,a);

    return 0;
}
void binary_string(int n,int a[])
{
    if(n<1){
        printArray(n,a);
        return;
    }
    else{
        a[n-1]=0;
        binary_string(n-1,a);
        a[n-1]=1;
        binary_string(n-1,a);
    }
}
