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
        string s;
        cin>>n>>s;

        int dot_char = 0, max_consequtive = 0, ans = 0;

        for(int i=0;i<n;i++){
            if(s[i]=='.'){
                dot_char++;
                max_consequtive++;
            }
            else if(s[i]=='#'){
                ans = max(ans, max_consequtive);
                max_consequtive=0;
            }
        }
        ans = max(ans, max_consequtive);

        if(ans >= 3) cout<<2<<"\n";
        else cout<<dot_char<<"\n";


    }

    return 0;

}
