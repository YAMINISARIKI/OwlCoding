#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define MOD 1000000007
const ll N = 1000001;
vector<ll>primes(N,1);
void Sieve(){
    primes[0] = 0;
    primes[1] = 1;
    for(int i=2;i<N;i++)
    {
        primes[i]=i;
    }
    for(int i = 2 ; i * i < N ; i++){
        if(primes[i]==i){
            for(int j = i * i ; j < N ; j+=i){
                if(primes[j]!=j) primes[j] = i;
            }
        }
    }
}
int main(){
    Sieve();
    int t;
    cin>>t;
    while(t--){
        int n,ans=1;
        cin>>n;
        int arr[n];
        map<int,int>mpp;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            int k=arr[i];
            while(k>1)
            {
                int m=primes[k];
                mpp[m]++;
                k/=m;
            }
        }
        for(auto it:mpp)
        {
            ans*=(it.second+1);
        }
        cout<<ans<<endl;
    }
}
