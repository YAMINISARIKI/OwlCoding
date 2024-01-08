#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int t;
    cin>>t;
    while(t--)
    {
        int l,r;
        cin>>l>>r;
        int res = a[l];
        for(int i=l+1;i<=r;i++)
        {
            res = res & a[i];
        }
        cout<<res<<endl;
    }
}
