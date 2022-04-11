#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        int v[n];
        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        sort(v,v+n);

        cout<<v[n-2]+v[n-1]<<"\n";

    }


    exit(0);
}
