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
        map<int,int>occur;

        for(int i=0;i<n;i++){
            cin>>v[i];
            occur[v[i]]++;
        }

        if(occur.size()>2) cout<<"No\n";
        else{
            if(abs(occur.begin()->second - occur.rbegin()->second)<=1) cout<<"Yes\n";
            else cout<<"No\n";
        }


    }

    return 0;

}
