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

        int n,k;
        cin>>n>>k;

        vector<int>v(n);

        int flag = 0;

        for(int i=0;i<n;i++){
            cin>>v[i];
            if(k == v[i]) flag=1;
        }

        if(flag) cout<<"YES\n";
        else cout<<"NO\n";


    }

    return 0;

}

