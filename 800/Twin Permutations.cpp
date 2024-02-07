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

        for(int i=0;i<n;i++) cin>>v[i];

        for(int i=0;i<n;i++){
            if(i==n-1) cout<<(n+1)-v[i]<<"\n";
            else cout<<(n+1)-v[i]<<" ";
        }

    }

    return 0;

}
