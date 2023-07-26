//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 100000007 // 1e8 + 7;
int greater_than_or_equal_t(vector<int> e, int t) {
  int ans = 1;
  for(int i = 0; i < e.size(); i++) {
    ans = 1ll * ans * (e[i] / t + 1) % mod;
  }
  return ans;
}
int solve(vector<int> e, int t) {
  return (greater_than_or_equal_t(e, t) - greater_than_or_equal_t(e, t + 1) + mod);
  // 2 tar mod tai 1st ta 2nd ter theke choto hote pare;
  // tai mod add kore dite hobe;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m, t;
    while(cin >> n >> m >> t and n > 0) {
      vector<int> e;
      for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) {
          int cnt = 0;
          while(n % i == 0) {
            n /= i;
            cnt++;
          }
          e.push_back(cnt * m);
        }
      }
      if(n > 1) e.push_back(1 * m);
      cout << solve(e, t) << "\n";
      //for(auto u : e) cout << u << " ";cout << "\n";
    }
	return 0;
}

