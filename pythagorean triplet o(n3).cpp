// pythagorean triplet ( a2 + b2 = c2 ) in o(n3) complexity
//input: 5 4 2 3 1
//output: YES     ie.[3,4,5]

#include<iostream>
using namespace std;
main()
{
    int n,c=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    if((a[i]*a[i] + a[j]*a[j] == a[k]*a[k]) || (a[j]*a[j] + a[k]*a[k] == a[i]*a[i]) || (a[k]*a[k] + a[i]*a[i] == a[j]*a[j]))
                        c++;
                    else
                        c=c;
                }
        }
    }
    if(c>0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
