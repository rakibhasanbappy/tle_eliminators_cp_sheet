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

        int cnt=0;

        for(int i=0;i<n-1;i++){
            if(v[i]%2 == v[i+1]%2) cnt++;
        }

        cout<<cnt<<"\n";


    }

    return 0;

}
