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

        ll n,k,x;
        cin>>n>>k>>x;

        ll down = (k*(k+1))/2;
        ll up = (k*((n-k+1)+n))/2;

        //cout<<"Down: "<<down<<" Up: "<<up<<endl;

        if(x>=down and x<=up) cout<<"YES\n";
        else cout<<"NO\n";


    }

    return 0;

}
