//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e8 + 7;
#define int long long
int solve_greater_than_or_equal(vector<int> e, int t) {
	int ans = 1;
	for(int i = 0; i < (int)e.size(); i++) {
		ans = (ans * (e[i] / t + 1)) % mod;
	}
	return ans;
}
int solve_equal(vector<int> e, int t) {
	return (solve_greater_than_or_equal(e, t) - solve_greater_than_or_equal(e, t + 1) + mod) % mod;
}
void solve() {
   int n, m, t, cs = 0;
   while(cin >> n >> m >> t and n > 0) {
   	cout << "Case " << ++ cs << ": ";
   	vector<int> e;
   	for(int i = 2; i * i <= n; i++) {
   		if(n % i == 0) {
   			int cnt = 0;
   			while(n % i == 0) {
   				cnt++;
   				n /= i;
   			}
   			e.push_back(cnt * m);
   		}
   	}
   	if(n > 1) {
   	  e.push_back(1 * m);
   	}
   	cout << solve_equal(e, t) << "\n";
   }
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int tf = 1; 
  //cin >> t;
  while(tf--) {
    solve();
  }
  return 0;
}

// https://prnt.sc/v1g214jiBgbJ