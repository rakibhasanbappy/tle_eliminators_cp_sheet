#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){


    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif

    int dx[4] = {1,1,-1,-1}, dy[4] = {1,-1,1,-1};

    int t;
    cin>>t;

    while(t--){

        int a,b,x1,x2,y1,y2;
        cin>>a>>b;

        cin>>x1>>y1>>x2>>y2;

        set<pair<int,int>>s1,s2;

        for(int i=0;i<4;i++){
            s1.insert({x1+dx[i]*a, y1+dy[i]*b});
            s1.insert({x1+dx[i]*b, y1+dy[i]*a});

            s2.insert({x2+dx[i]*a, y2+dy[i]*b});
            s2.insert({x2+dx[i]*b, y2+dy[i]*a});
        }

        int ans = 0;

        for(auto i:s1){
            if(s2.find(i) != s2.end()) ans++;
        }

        cout<<ans<<"\n";

    }

    return 0;

}
