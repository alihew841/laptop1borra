#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base:: sync_with_stdio(false);
    cin.tie(nullptr);

    int N=5;

    ///edges is an object:
    ///vector of integers b, which represents nodes
    vector<pair<int,int>> edges;


    ///add the edge from 1 to 2
    edges.push_back({1,2});
    ///add the edges from 2 to 3 and 4
    edges.push_back({2,3});
    edges.push_back({2,3});
    ///add the edge from 3 to 4
    edges.push_back({3,4});
    ///add the edge from 4 to 1
    edges.push_back({4,1});


    ///if weighted, edge is an object
    /// vector of tuples (a,b,w)

    exit(0);
}
