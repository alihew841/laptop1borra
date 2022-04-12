#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    int n;

    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);

        for(int i=0;i<n;i++){
            cout<<a[i]<<"\n "[i+1<n];
            ///cout<<0<<"\n";sdfsfsdfdf
        }
    }
    exit(0);
}
