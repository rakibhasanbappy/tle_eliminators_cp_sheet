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
        vector<int>ans;

        for(int i=0;i<n;i++) cin>>v[i];

        int m = n;

        ans.push_back(v[0]);

        for(int i=1;i<n;i++){
            if(v[i-1]>v[i]){
                m++;
                ans.push_back(v[i]);
            }
            ans.push_back(v[i]);
        }

        cout<<m<<"\n";

        for(int i=0;i<m;i++){
            if(i == m-1) cout<<ans[i]<<"\n";
            else cout<<ans[i]<<" ";
        }

    }

    return 0;

}
