#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif

    int t;
    cin>>t;

    while(t--){

        ll a,b,n;
        cin>>a>>b>>n;

        vector<ll>v(n);

        ll ans = b;

        for(int i=0;i<n;i++){
            cin>>v[i];
            ans += min(a-1, v[i]);
        }

        cout<<ans<<"\n";

    }

    return 0;

}
