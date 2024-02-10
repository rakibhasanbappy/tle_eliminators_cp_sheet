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
        vector<int>freq(n,0);
        int flag = 0;

        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]==2){
                flag++;
                freq[i] = flag;
            }
        }

        if(flag == 0) cout<<1<<"\n";
        else if(flag%2) cout<<-1<<"\n";
        else{
            for(int i=0;i<n;i++){
                if(freq[i] == flag/2){
                    cout<<i+1<<"\n";
                    flag=0;
                    break;
                }
            }
            if(flag) cout<<-1<<"\n";
        }


    }

    return 0;

}
