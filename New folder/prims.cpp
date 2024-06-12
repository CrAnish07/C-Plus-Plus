#include<bits/stdc++.h>
using namespace std;

int spanningTree(int v, vector<vector<int>> adj[]) {
    priority_queue<pair<int,int>,
    vector<pair<int,int>>, greater<pair<int,int>>> pq;

    vector<int> vis(v,0);

    pq.push({0,0});
    int sum = 0;
    while(!pq.empty()) {
        auto it = pq.top();
        pq.pop();

        int node = it.second;
        int wt = it.first;

        if(vis[node] == 1) continue;
        vis[node] = 1;
        sum += wt;

        for(auto it: adj[node]) {
            int adjNode = it[0];
            int edW = it[1];
            if(!vis[adjNode]) {
                pq.push({edW, adjNode});
            }
        }
    }
    return sum;
} 

int main() {

                       
	return 0;
}