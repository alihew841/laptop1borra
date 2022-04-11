#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a=1,b=2,c;
    int sum=0;

    while(b<=4000000){
        if(b%2==0) sum=sum+b;
        c=a+b;
        a=b;
        b=c;
    }
    cout<<sum<<endl;
    exit(0);
}
