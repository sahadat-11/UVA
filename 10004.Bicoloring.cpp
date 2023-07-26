//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 205;
vector<int> adj[N];
bool vis[N];
int col[N];
bool ok;

void dfs(int u) {
  vis[u] = true;
  for(auto v : adj[u]) {
    if(!vis[v]) {
      col[v] = col[u] ^ 1; // u col ja hove v tar negative hobe;
      dfs(v);
    }
    else {
      if(col[v] == col[u]) ok = false;
    }
  }
}
int main() {
  int n;
  while(cin >> n and n) {
  int m; cin >> m;
  while(m--) {
    int u, v; cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  } 
  ok = true;
  for(int i = 0; i < n; i++) {
    if(!vis[i]) {
      dfs(i);
    }
  }
  if(ok) cout << "BICOLORABLE.\n";
  else cout << "NOT BICOLORABLE.\n";
  for(int i = 0; i < n; i++) {
    adj[i].clear();
    vis[i] = false;
    col[i] = 0;
  }
 }
  return 0;
}