#include <bits/stdc++.h>
using namespace std;

///to use DFS, we use adjacency list
int N=8;
bool visited[N];

void dfs(int s){
    if(visited[s]) return;
    visited[s]=true;

    for(auto u: adj[s]){
        dfs(u);
    }
}


int main(){
    ios_base:: sync_with_stdio(false);
    cin.tie(nullptr);


    vector<int> adj[N];

    adj[1].push_back(2);
    adj[2].push_back(3);
    adj[2].push_back(4);
    adj[3].push_back(4);
    adj[4].push_back(1);

    ///initially we didn't visit anithing
    for(int i=0;i<N;i++){
        visited[N]=false;
    }

    int s=1;

    dfs(1);


    exit(0);
}

