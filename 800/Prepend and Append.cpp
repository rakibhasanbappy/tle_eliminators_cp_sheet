#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){


    //freopen("input.txt", "r", stdin);

    int t;
    cin>>t;

    while(t--){


        int n;
        cin>>n;
        string s;
        cin>>s;

        int cnt = n;

        for(int i=0,j=n-1;i<=j;i++,j--){

            if((s[i]=='0' and s[j] == '1') or (s[i]=='1' and s[j] == '0')) cnt-=2;
            else break;

        }

        cout<<cnt<<"\n";


    }

    return 0;

}
