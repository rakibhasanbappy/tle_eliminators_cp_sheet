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

        int ans = 0;
        int n;
        cin>>n;

        vector<int>v(n);

        for(int i=0;i<n;i++) cin>>v[i];

        int cnt=0;

        for(int i=0;i<n;i++){
            if(v[i] == 0){
                cnt++;
            }else{
                ans = max(ans, cnt);
                cnt = 0;
            }
        }
        ans = max(ans, cnt);

        cout<<ans<<"\n";

    }

    return 0;

}
