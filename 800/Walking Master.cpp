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

        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;

        if(y1>y2){
            cout<<"-1\n";
            continue;
        }

        int x = y2-y1;

        x1+=x; y1+=x;

        if(x2>x1){
            cout<<"-1\n";
            continue;
        }

        int y = x1-x2;

        x1-=y;

        if(x1!=x2 or y1!=y2) cout<<-1<<"\n";
        else cout<<x+y<<"\n";

    }

    return 0;

}
