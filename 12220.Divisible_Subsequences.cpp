//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 5e5 + 7;
ll pre_sum[N];
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t, cs = 0; cin >> t;
   while(t--) {
      int d, n; cin >> d >> n; int a[n + 1] = {0};
      for(int i = 1; i <= n; i++) cin >> a[i];
      for(int i = 1; i <= n; i++) {
        pre_sum[i] = pre_sum[i - 1] + a[i];
      }
      ll cnt = 0;
      for(int l = 1; l <= n; l++) {
        for(int r = l; r <= n; r++) {
          ll sum = pre_sum[r] - pre_sum[l - 1];
          if(sum % d == 0) cnt++;
        }
      }
      cout << cnt << "\n";
   }
   return 0;
}
// Complexity O(n * n);

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 5e5 + 7;
ll pre_sum[N];
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t, cs = 0; cin >> t;
   while(t--) {
      int d, n; cin >> d >> n; int a[n + 1] = {0};
      for(int i = 1; i <= n; i++) cin >> a[i];
      for(int i = 1; i <= n; i++) {
        pre_sum[i] = pre_sum[i - 1] + a[i];
      }
      ll cnt = 0;
      for(int r = 1; r <= n; r++) {
        for(int l = 1; l <= r; l++) {
          ll sum = pre_sum[r] - pre_sum[l - 1];
          if(sum % d == 0) cnt++;
        }
      }
      cout << cnt << "\n";
   }
   return 0;
}
// Complexity O(n * n);

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 5e5 + 7;
ll pre_sum[N];
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t, cs = 0; cin >> t;
   while(t--) {
      int d, n; cin >> d >> n; int a[n + 1];
      for(int i = 1; i <= n; i++) cin >> a[i];
      for(int i = 1; i <= n; i++) {
        pre_sum[i] = pre_sum[i - 1] + a[i];
      }
      map<int, int> cnt;
      ll ans = 0;
      cnt[pre_sum[0] % d]++;
      for(int r = 1; r <= n; r++) {
        ans += cnt[pre_sum[r] % d];
        cnt[pre_sum[r] % d]++;
      }
      cout << ans << "\n";
   }
   return 0;
}
// Complexity O(n * log(n));

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int d, n; cin >> d >> n;
   vector<int> v(n + 1);
   for(int i = 1; i <= n; i++) cin >> v[i];
   int cnt = 0, sum = 0;
   map<int, int> mp;
   mp[0]++;
   for(int i = 1; i <= n; i++) {
    sum += v[i];
    cnt += mp[sum % d];
    mp[sum % d]++;
   }
   cout << cnt << "\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}

// prnt.sc/kaxLEONRT1wR
// Complexity O(n * log(n));