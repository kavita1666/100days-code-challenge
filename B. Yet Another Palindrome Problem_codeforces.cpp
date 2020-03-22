#include<iostream>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,mid;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];

        bool check=false;
        for(int i=0;i<n;i++)
        {
            for(int j=i+2;j<n;j++)
            {
                if(arr[i]==arr[j])
                {
                    check=true;
                    break;
                }
            }
        }
        if(check==true)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
