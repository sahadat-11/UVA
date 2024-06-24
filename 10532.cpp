//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 55, mod = 1e9 + 7;
#define int long long
int dp[N][N], cnt[N];
int n, m, r;

int func(int i, int taken) {
	if(i == n + 1) {
	  return taken == r;
	}
	int &ans = dp[i][taken];
	if(ans != -1) return ans;
	ans = 0;
	for(int k = 0; k <= cnt[i]; k++) {
	  ans += func(i + 1, taken + k);
	}
	return ans;
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int cs = 0;
  while(cin >> n >> m and n) {
  	memset(cnt, 0, sizeof cnt);
    for(int i = 1; i <= n; i++) {
      int x; cin >> x;
      cnt[x]++;
    }
    cout << "Case " << ++ cs << ":\n";
    while(m--) {
    	cin >> r;
    	memset(dp, -1, sizeof dp);
    	cout << func(1, 0) << "\n";
    }
  }
  return 0;
}