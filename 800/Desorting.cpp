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

        int min_ = INT_MAX;

        for(int i=1;i<n;i++){
            if(v[i] - v[i-1] < min_) min_ = v[i] - v[i-1];
        }

        if(min_<0) cout<<0<<"\n";
        else{
            cout<<min_/2 + 1<<"\n";
        }

    }

    return 0;

}
