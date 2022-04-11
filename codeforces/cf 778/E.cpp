#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    int maxi=0,canti;
    int d;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    if(n<3) cout<<0<<"\n";
    else{
        for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((a[j]-a[i])%(j-i)!=0) continue;

            d=(a[j]-a[i])/(j-i);
            //cout<<i<<" "<<j<<" "<<d<<"\n";
            canti=2;
            for(int k=j+1;k<n;k++){
                if(a[k]-a[i]==(k-i)*d) canti++;
            }
            //cout<<canti<<"\n";
            maxi=max(maxi,canti);
        }
    }

    cout<<n-maxi<<"\n";

    }

    
    exit(0);
}
