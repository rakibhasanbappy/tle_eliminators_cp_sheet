#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){


    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif

    vector<int>v(1000000);

    for(int i=1;i<=999999;i++){
        string s = to_string(i);
        int flag=0;
        for(auto i:s){
            if(i != '0') flag++;
            if(flag>1){
                flag=0;
                break;
            }
        }
        if(flag) v[i] = 1;
    }

    for(int i=2;i<=999999;i++) v[i] += v[i-1];


    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        cout<<v[n]<<"\n";
    }

    return 0;

}
