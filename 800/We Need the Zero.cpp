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

        vector<int>v(n);
        int xor_ = 0;

        for(int i=0;i<n;i++){
            cin>>v[i];
            xor_ ^= v[i];
        }


        for(int i=0;i<n;i++) v[i]^=xor_;

        int y=0;
        for(int i=0;i<n;i++) y^=v[i];
        if(y==0) cout<<xor_<<"\n";
        else cout<<"-1\n";

    }

    return 0;

}
