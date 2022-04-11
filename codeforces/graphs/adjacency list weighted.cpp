#include <bits/stdc++.h>
using namespace std;

///graph representation
///adjacency list

int main(){
    ios_base:: sync_with_stdio(false);
    cin.tie(nullptr);

    int N=8;
    /// weighted edges
    /// a goes to b with weight w
    /// we save the pair (b,w)

    ///adj is a list of N objects:
    ///adj[a]:vectors of pairs of integers (b,w)
    vector<pair<int,int>> adj[N];



    ///1 goes to 2, weight 5
    adj[1].push_back({2,5});
    ///2 goes to 3 and 4. weights 6 and 7
    adj[2].push_back({3,6});
    adj[2].push_back({4,7});
    ///3 goes to 4, weight 5
    adj[3].push_back({4,5});
    ///4 goes to 1, weight 2
    adj[4].push_back({1,2});

    ///if is not directed and a is connected to b we add a to
    ///b and b to a
    /// adj[a].push_back(b);
    /// adj[b].push_back(a);

    exit(0);
}
