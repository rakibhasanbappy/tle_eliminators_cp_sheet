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

        ll n;
        cin>>n;

        int ans=0;

        if(n%2) cout<<1<<"\n";
        else{
            for(ll i=1;i<=n;i++){
                if(n%i) break;
                else ans++;
            }
            cout<<ans<<"\n";
        }

    }

    return 0;

}
