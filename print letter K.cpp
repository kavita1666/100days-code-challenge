#include<iostream>
using namespace std;
main()
{
    int n,i,j;
    cin>>n;
//    for(int i=0;i<n;i++){
//        for(int j=0;j<n;j++){
//            if(j==0 || ())
//                cout<<"*";
//            else
//                cout<<" ";
//        }
//        cout<<"\n";
//    }

for(i=n;i>=1;--i)
{
for(j=0;j<=i;++j)
{
if(j==0||j==i)
cout<<"*";
else
cout<<" ";
}
cout<<"\n";
}

for(i=1;i<=n;++i)
{
for(j=0;j<=i;++j)
{
if(j==0||j==i)
cout<<"*";
else
cout<<" ";
}
cout<<"\n";
}

    cout<<endl;
    return 0;
}

