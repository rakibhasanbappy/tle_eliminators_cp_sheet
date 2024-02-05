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

        int n;
        cin>>n;

        int ans = 0;

        vector<int>v(n-1);

        for(int i=0;i<n-1;i++){
            cin>>v[i];
            ans+=v[i];
        }

        cout<<ans*(-1)<<"\n";

    }

    return 0;

}

