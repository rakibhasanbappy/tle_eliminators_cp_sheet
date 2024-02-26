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

        string s;
        cin>>s;

        unordered_map<char,int>mp;

        for(int i=0;i<n;i++) mp[s[i]]++;

        int o=0;
        for(auto i:mp){
            if(i.second%2) o++;
        }

        if(o-1<0) o=0;
        else o = o-1;

        if(o<=k) cout<<"YES\n";
        else cout<<"NO\n";

    }

    return 0;

}
