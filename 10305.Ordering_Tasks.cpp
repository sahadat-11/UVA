//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;

const int N = 105;
vector<int> adj[N];
bool vis[N];
int indeg[N];
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m; 
  while(cin >> n >> m and n) {
    while(m--) {
    int u, v; cin >> u >> v;
    adj[u].push_back(v);
    indeg[v]++;
  }
  vector<int> zero;
  for(int i = 1; i <= n; i++) {
    if(indeg[i] == 0) zero.push_back(i);
  }
  vector<int> ans;
  while(ans.size() < n) {
    int cur = zero.back();
    zero.pop_back();
    vis[cur] = true;
    ans.push_back(cur);
    for(auto v : adj[cur]) {
      indeg[v]--;
      if(!vis[v] and indeg[v] == 0) {
        zero.push_back(v);
        vis[v] = true;
      }
    }
  }
  for(auto u : ans) cout << u << " ";
  cout << "\n";
  for(int i = 1; i <= n; i++) {
    adj[i].clear();
    vis[i] = false;
  }
 }
  return 0;
} 
// optimize O(V + E)
