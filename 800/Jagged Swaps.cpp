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

        for(int i=0;i<n;i++) cin>>v[i];

        for(int j=0;j<n;j++){
            for(int i=1;i<n-1;){
                if(v[i-1]<v[i] and v[i]>v[i+1]){
                    int temp = v[i];
                    v[i] = v[i+1];
                    v[i+1] = temp;
                }
                else i++;
            }
        }


        if(is_sorted(v.begin(),v.end())) cout<<"YES\n";
        else cout<<"NO\n";

    }

    return 0;

}


// Another beautiful solution from the tutorial (Hints: Observe the samples.)
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

        for(int i=0;i<n;i++) cin>>v[i];

        if(v[0] == 1) cout<<"YES\n";
        else cout<<"NO\n";


    }

    return 0;

}
