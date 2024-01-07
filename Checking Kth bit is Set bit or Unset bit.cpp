#include <iostream>
using namespace std;
int check(int x,int k)
{
    int bit = 1<<k;
    if(x&k)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main() {
    // Write C++ code here
    int x,k;
    cin>>x>>k;
    if(check(x,k))
    {
        cout<<"Set Bit";
    }
    else
    {
        cout<<"Unset Bit";
    }
    return 0;
}
