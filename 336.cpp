//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int inf = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int edges, cs = 0;
  while(cin >> edges and edges) {
  	map<int, vector<int>> g;
  	set<int> nodes;
  	map<int, int> dis;
  	while(edges--) {
  		int u, v; cin >> u >> v;
  		g[u].push_back(v);
  		g[v].push_back(u);
  		nodes.insert(u);
  		nodes.insert(v);
  	}
  	int start, ttl;
  	while(cin >> start >> ttl) {
  		if(start == 0 and ttl == 0) break;
  		for(auto x : nodes) {
  		  dis[x] = inf;
  	    }
        queue<int> q;
        q.push(start);
        dis[start] = 0;
        while(!q.empty()) {
        	int u = q.front();
        	q.pop();
        	for(auto v : g[u]) {
               if(dis[u] + 1 < dis[v]) {
               	 dis[v] = dis[u] + 1;
               	 q.push(v);
               }
        	}
        }
        int cnt = 0;
        for(auto nd : nodes) {
          if(dis[nd] > ttl) cnt++;
        }
        cout << "Case " << ++ cs << ": " << cnt << " nodes not reachable from node " << start << " with TTL = " << ttl << ".\n";

  	}
  }
  return 0;
}