//Petr called his car dealer, who instructed him to rotate the lock's wheel exactly n times.
//The i-th rotation should be ai degrees, either clockwise or counterclockwise,
//and after all n rotations the pointer should again point at zero.
//This confused Petr a little bit as he isn't sure which rotations should be done clockwise and
//which should be done counterclockwise. As there are many possible ways of rotating the lock,
//help him and find out whether there exists at least one, such that after all n rotations the pointer will point at zero again.

//input: 3
// 10, 20, 30
//output: YES      ie. we can achieve our goal by applying the first and the second rotation clockwise, and performing the third rotation counterclockwise.

//input: 3
// 10, 10, 10
//output: NO        ie.In the second example, it's impossible to perform the rotations in order to make the pointer point at zero in the end.

//input: 3
// 120, 120, 120
//output: YES        ie.Petr can do all three rotations clockwise. In this case,
//                       the whole wheel will be rotated by 360 degrees clockwise and the pointer will point at zero again.

#include <bits/stdc++.h>
using namespace std;
bool rec(int n,int a[],int sum);
main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0 ; i<n ;i++)
        cin>>a[i];
    if(rec(n-1,a,0)) cout<<"YES";
    else cout<<"NO";
    cout<<endl;
}
bool rec(int n,int a[], int sum){
    if(n==-1)
    {
        if(sum%360==0)
            return true;
        else
            return false;
    }
    return rec(n-1,a,sum+a[n])||rec(n-1,a,sum-a[n]);
}
