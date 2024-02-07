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

        int n,k,x;
        cin>>n>>k>>x;

        if(x!=1){
            cout<<"YES\n"<<n<<"\n";
            for(int i=0;i<n;i++){
                if(i==n-1) cout<<1<<"\n";
                else cout<<1<<" ";
            }
        }
        else if(k==1 or (k==2 and n%2!=0)){
            cout<<"NO\n";
        }
        else{
            if(n%2==0){
                cout<<"YES\n"<<n/2<<"\n";
                for(int i=0;i<n/2;i++) cout<<2<<" ";
                cout<<"\n";
            }else{
                cout<<"YES\n"<<(n-3)/2+1<<"\n";
                for(int i=0;i<(n-3)/2;i++) cout<<2<<" ";
                cout<<3<<"\n";
            }
        }

    }

    return 0;

}
