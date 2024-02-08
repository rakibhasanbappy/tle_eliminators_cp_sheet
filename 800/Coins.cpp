#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){


    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif

    int t;
    cin>>t;

    while(t--){

        ll n,k;
        cin>>n>>k;

        if(n%k==0 or (n-k)%2==0 or n%2==0) cout<<"YES\n";
        else cout<<"NO\n";

    }

    return 0;

}
