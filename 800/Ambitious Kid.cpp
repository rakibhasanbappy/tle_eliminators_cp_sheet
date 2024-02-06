#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif

    int n;
    cin>>n;
    vector<int>v(n);

    int min_ = INT_MAX;

    for(int i=0;i<n;i++){
        cin>>v[i];
        if(abs(v[i]-0)<min_) min_ = abs(v[i]);
    }

    cout<<min_<<"\n";


    return 0;

}
