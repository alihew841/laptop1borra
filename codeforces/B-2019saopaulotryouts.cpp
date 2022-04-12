#include <bits/stdc++.h>
using namespace std;



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    int conta=1;

    int C[3],M[3],Y[3],K[3]; 

    int c,m,y,k;
    ///sdasdadsa
    while(t--){
        c=m=y=k=1000001;
        for(int i=0;i<3;i++){
            cin>>C[i]>>M[i]>>Y[i]>>K[i];
            c=min(c,C[i]);
            m=min(m,M[i]);
            y=min(y,Y[i]);
            k=min(k,K[i]);
        }

        cout<<"Case #"<<conta<<": ";

        if(c+m+y+k<1000000) cout<<"IMPOSSIBLE\n";
        else{
            int exceso=c+m+y+k-1000000;
            int a[4];
            a[0]=c;
            a[1]=m;
            a[2]=y;
            a[3]=k;
            int indi=0;
            while(exceso>0){
                int mi=min(exceso,a[indi]);
                a[indi]=a[indi]-mi;
                exceso=exceso-mi;
                indi++;
            }
            
            for(int i=0;i<4;i++){
                cout<<a[i]<<"\n "[i+1<4];
            }
        }

        conta++;
    }

    return 0;
}