#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<vector<int>> v;
    for(int i=0;i<n;i++){
        vector<int> t;
        for(int j=0;j<32;j++){
            if((a[i]&(1<<j)))
            t.push_back(1);
            else
            t.push_back(0);
        }
        v.push_back(t);
    }
    for(int i=0;i<32;i++){
        for(int j=1;j<v.size();j++){
            v[j][i]+=v[j-1][i];
        }
    }
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        int ans=0,d;
        for(int i=0;i<32;i++){
            if(l!=0)
            d=v[r][i]-v[l-1][i];
            else
            d=v[r][i];
            if(d==(r-l)+1)
            ans+=(1<<i);
        }
        cout<<ans<<" ";
    }
}