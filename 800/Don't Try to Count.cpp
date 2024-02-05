#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){


    //freopen("input.in", "r", stdin);

    int t;
    cin>>t;

    while(t--){

        int n,m;
        cin>>n>>m;
        string x, s;
        cin>>x>>s;
        int c = 0,flag=0;

        if (x.find(s) != string::npos){
                cout<<0<<"\n";
                continue;
        }

        while(n<=25){
            x = x + x;
            n += n;
            c++;

            if (x.find(s) != string::npos){
                flag = 1;
                break;
            }
        }
        if(flag) cout<<c<<"\n";
        else cout<<"-1"<<"\n";

    }

    return 0;

}
