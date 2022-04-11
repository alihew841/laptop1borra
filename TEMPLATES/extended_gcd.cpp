#include <bits/stdc++.h>
using namespace std;

//extended_gcd.cpp
//extended_gcd(a,b,x,y)=d such that
//d=ax+by
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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,x,y,d;
    int t;
    cin>>t;

    while(t--){
        cin>>a>>b;
        d=extended_gcd(a,b,x,y);
        cout<<"gcd of "<<a<<","<<b<<"is "<<d<<" and \n "<<d<<"="<<a<<"*"<<x<<"+"<<b<<"*"<<y<<"\n";
    }
    exit(0);

