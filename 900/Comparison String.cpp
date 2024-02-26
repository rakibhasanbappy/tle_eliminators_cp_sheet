#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        string s;
        cin>>s;

        int cnt=1,ans=1;

        for(int i=0;i<n-1;i++){
            if(s[i]!=s[i+1]){
                cnt=1;
            }else cnt++;
            ans = max(ans,cnt);
        }
        cout<<ans+1<<"\n";

    }

    return 0;

}
