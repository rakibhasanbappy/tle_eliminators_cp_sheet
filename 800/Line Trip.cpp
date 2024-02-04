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

        int n,x;
        cin>>n>>x;

        vector<int>v(n);

        int ans = INT_MIN;

        for(int i=0;i<n;i++){
            cin>>v[i];
            if(i==0) ans = max(ans, v[i]-0);
            else ans = max(ans, v[i]-v[i-1]);
        }
        ans = max(ans, (x-v[n-1])*2);

        cout<<ans<<"\n";

    }

    return 0;

}
