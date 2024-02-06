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

        int e = 0, o = 0;

        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]%2) o+=v[i];
            else e+=v[i];
        }


        if(e%2==o%2) cout<<"YES\n";
        else cout<<"NO\n";



    }

    return 0;

}
