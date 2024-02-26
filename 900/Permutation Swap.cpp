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

        int n;
        cin>>n;

        int ans=0;

        for(int i=1;i<=n;i++){
            int x; cin>>x;
            ans = __gcd(ans, abs(x-i));
        }

        cout<<ans<<"\n";

    }

    return 0;

}
