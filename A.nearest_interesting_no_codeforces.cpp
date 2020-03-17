#include<iostream>
using namespace std;

int sum(int a)
{
    int s=0;
    while(a>0)
    {
        int r;
        r=a%10;
        s+=r;
        a=a/10;
    }
    return s;
}
int  main()
{
    long int a;
    cin>>a;

    while(sum(a)%4!=0){
        a++;
    }
    cout<<a<<endl;
    return 0;


}
