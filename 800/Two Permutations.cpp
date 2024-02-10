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

        int n,a,b;
        cin>>n>>a>>b;

        if(n==a and n==b) cout<<"YES\n";
        else{
            if(a+b+2<=n) cout<<"YES\n";
            else cout<<"NO\n";
        }

    }

    return 0;

}
