//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 105;
string s[N];
bool vis[N][N];
int di[] = {0, -1, 0, +1, -1, -1, +1, +1};
int dj[] = {+1, 0, -1, 0, +1, -1, -1, +1};
int n, m;
bool is_valid(int i, int j) {
  return i >= 0 and i < n and j >= 0 and j < m;
}
void dfs(int i, int j) {
  // node for cell (i, j)
  vis[i][j] = true;
  for (int k = 0; k < 8; k++) {
    int nxt_i = i + di[k];
    int nxt_j = j + dj[k];
    if (is_valid(nxt_i, nxt_j) and s[nxt_i][nxt_j] == '@' and !vis[nxt_i][nxt_j]) {
      dfs(nxt_i, nxt_j);
    }
  }
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  while (cin >> n >> m and n and m) {
    for (int i = 0; i < n; i++) {
      cin >> s[i];
    }
    int components = 0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        // currently at cell (i, j)
        if (s[i][j] == '@' and !vis[i][j]) {
          dfs(i, j);
          components++;
        }
      }
    }
    cout << components << '\n';
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        vis[i][j] = false;
      }
    }
  }
  return 0;
}


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 105, mod = 1e9 + 7;
#define int long long
int n, m;
char a[N][N];
bool vis[N][N];
int dx[] = {0, 0, -1, +1, -1, +1, -1, +1};
int dy[] = {+1, -1, 0, 0, +1, +1, -1, -1};

bool isValid(int x, int y) {
  return x >= 0 and x < n and y >= 0 and y < m;
}

void dfs(int i, int j) {
  vis[i][j] = true;
  for(int k = 0; k < 8; k++) {
    int x = i + dx[k];
    int y = j + dy[k];
    if(isValid(x, y) and a[x][y] == '@' and !vis[x][y]) {
      dfs(x, y);
    }
  }
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  while(cin >> n >> m and n and m) {
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < m; j++) {
        cin >> a[i][j];
      }
    }
    int ans = 0;
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < m; j++) {
        if(a[i][j] == '@' and !vis[i][j]) {
          ans++;
          dfs(i, j);
        }
      }
    }
    cout << ans << "\n";
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < m; j++) {
        vis[i][j] = false;
      }
    }
  }
  return 0;
}