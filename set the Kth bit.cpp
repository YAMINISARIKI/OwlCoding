#include <iostream>
using namespace std;
int Settingbit(int x,int k)
{
    int bit = 1<<k;
    return x|k;
}
int main() {
    // Write C++ code here
    int x,k;
    cin>>x>>k;
    cout<<Settingbit(x,k);
    return 0;
}
