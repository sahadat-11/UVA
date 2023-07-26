//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int T, N, a[99], ans;
  string s;
  cin >> T;
  getline(cin, s);
  while (T--) {
    getline(cin, s);
    istringstream is(s);
    N = 0;
    while (is >> a[N]) ++N;
    ans = 0;
    for (int i = 0; i < N; ++i) {
      for (int j = i + 1; j < N; ++j) {
        ans = max(ans, __gcd(a[i], a[j]));
      }
    }
    cout << ans << endl;
  }
  return 0;
}