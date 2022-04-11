#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base:: sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    string S[2] ={"YES","NO"};

    int n,indi;
    cin>>t;
    while(t--){
        indi=0;
        cin>>n;

        int v[n];

        for(int i=0;i<n;i++)cin>>v[i];

        if(n==1){
            if(v[0]>1) indi=1;
        }
        else{
            sort(v,v+n);

            if(v[n-1]-v[n-2]>1) indi=1;
        }

        cout<<S[indi]<<"\n";
    }
    exit(0);
}
