#include <bits/stdc++.h>
using namespace std;
#define ll long long
//BOOL 

template <typename T>
T extended_gcd(T a,T b, T& x, T& y){
    if(a==0){
        x=0;y=1;
        return b;
    }
    else{
        T q=b/a; 
        T r=b%a;

        T d = extended_gcd(r,a,y,x);
        x-=q*y;
        return d;
    }
}


template<typename T>
bool diophantine(T a,T b,T c,T& x,T& y){
    T d=extended_gcd<T>(abs(a),abs(b),x,y);
    if(c%d) return false;

    x*=c/d;
    y*=c/d;

    if(a<0) x*=-1;
    if(b<0) y*=-1;

    return true;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,x,y,c;
    int t;
    cin>>t;

    while(t--){
        cin>>a>>b>>c;
        if(diophantine(a,b,c,x,y)){
            cout<<"No se puede\n";
        }
        else{
            printf("Se puede: %d=%d*%d+ %d*%d\n",c,a,x,b,y);
        }
    }
    exit(0);
}