#include <bits/stdc++.h>
using namespace std;

///adjacency matrix representation
///

int main(){
    ios_base:: sync_with_stdio(false);
    cin.tie(nullptr);

    int N=5;
    ///ignoramos nodos 0;
    /// adj es una matrix que indica presencia de edges

    int adj[N][N];

    /// if nonweighted graphs, adj[a][b]=1 indica edge
    /// in weighted edges, adj[a][b]=w indica weight

    adj[1][2]=1;///5
    adj[2][3]=1;///6
    adj[2][4]=1;///7
    adj[3][4]=1;///5
    adj[4][1]=1;///2



    exit(0);
}
