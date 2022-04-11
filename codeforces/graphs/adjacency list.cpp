#include <bits/stdc++.h>
using namespace std;

///graph representation
///adjacency list

int main(){
    ios_base:: sync_with_stdio(false);
    cin.tie(nullptr);

    int N=8;

    ///adj is a list of N objects:
    ///adj[a]: vector of integers b, which represents nodes
    vector<int> adj[N];

    ///weighted edges
    ///

    ///1 goes to 2
    adj[1].push_back(2);
    ///2 goes to 3 and 4
    adj[2].push_back(3);
    adj[2].push_back(4);
    ///3 goes to 4
    adj[3].push_back(4);
    ///4 goes to 1
    adj[4].push_back(1);

    ///if is not directed and a is connected to b we add a to
    ///b and b to a
    /// adj[a].push_back(b);
    /// adj[b].push_back(a);


    ///si quieres hacer algo con los vecinos de s

    /**
    for(auto u: adj[s]){
        //process node u
    }

    **/

    exit(0);
}
