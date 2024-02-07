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
        int pos = 0, neg=0;

        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i] == 1) pos++;
            else neg++;
        }

        if((pos == neg and pos%2==0 and neg%2==0) or neg==0) cout<<0<<"\n";
        else{
            if(pos>neg){
                if(neg%2) cout<<1<<"\n";
                else cout<<0<<"\n";
            }
            else{
                int x = (neg-pos)/2 + (neg-pos)%2;
                neg-=x;
                pos+=x;
                if(neg%2) x+=1;
                cout<<x<<"\n";
            }
        }



    }

    return 0;

}
