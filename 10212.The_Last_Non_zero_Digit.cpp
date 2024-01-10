// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// const int N = 1e6 + 7, mod = 1e9 + 7;
// int fact[N];
// int binexp(int a, int b) {
// 	int ans = 1;
// 	while(b) {
// 		if(b & 1) { // if b in odd
// 			ans = (ans * 1ll * a) % mod; // type cast for integer overflow
// 		}
// 		a = (a * 1ll * a) % mod;
// 		b >>= 1; // b / 2;
// 	}
// 	return ans;
// }
// int main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   fact[0] = 1;
//   for(int i = 1; i < N; i++) {
//   	fact[i] = (fact[i - 1] * 1ll * i) % mod;
//   }
// 	int n, r;
// 	while(cin >> n >> r) {
//       int ans = fact[n]; // ncr = n! / ((n - r)! * r!);
// 			int den = (fact[n - r]);
// 			ans = (ans * 1ll * binexp(den, mod - 2)) % mod; //(a / b) = a * (b ^-1);
// 			//cout << ans << "\n";
// 			while(ans) {
// 				if(ans % 10) {
// 					cout << ans % 10 << "\n"; break;
// 				}
// 				ans /= 10;
// 			}
// 	}
//   return 0;
// }

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
	int n, r;
	while(cin >> n >> r) {
        ll ans = 1;
	      ll x = n - r + 1;
	      for(ll i = n; i >= x; i--) {
	      	ans *= i;
	      	while(ans % 10 == 0) {
	          ans /= 10;
	      	}
	      	ans %= mod;
	      }
	      cout << ans % 10 << endl;
	}
  return 0;
}