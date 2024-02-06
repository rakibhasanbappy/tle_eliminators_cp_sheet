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

        sort(v.begin(),v.end());

        int ans = -1;

        for(int i=n-1;i>0;i--){
            if(v[i]!=v[i-1]){
                ans = i;
                break;
            }
        }

        if(ans == -1) cout<<-1<<"\n";
        else{
            cout<<ans<<" "<<n-ans<<endl;

            for(int i=0;i<ans;i++){
                if(i==ans-1) cout<<v[i]<<"\n";
                else cout<<v[i]<<" ";
            }

            for(int i=ans;i<n;i++){
                if(i==n-1) cout<<v[i]<<"\n";
                else cout<<v[i]<<" ";
            }
        }
    }

    return 0;

}
