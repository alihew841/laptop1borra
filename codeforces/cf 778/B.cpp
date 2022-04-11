#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t,imin;
    cin>>t;
    
    string S;
    map<char,int> m;
    while(t--){    
        for(char c='a';c<='z';c++){
            m[c]=0;
        }
        imin=0;
        cin>>S;
        int n=S.length();
        for(int i=0;i<n;i++){
            m[S[i]]++;
        }


        for(int i=0;i<n;i++){
            if(imin>0) cout<<S[i];
            else{
                if(m[S[i]]>1){
                    m[S[i]]--;
                }
                else{
                    cout<<S[i];
                    imin=1;
                }
            }
        }
        cout<<"\n";
    }

    exit(0);
}
