// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// const int N = 1e6 + 7, mod = 1e9 + 7;
// #define int long long
// int fact[N], invf[N];

// int binexp(int a, int b) {
//   int ans = 1 % mod; a %= mod; if (a < 0) a += mod;
//   while(b) {
//     if(b & 1) {
//       ans = (ans * 1ll * a) % mod;
//     }
//     a = (a * 1ll * a) % mod;
//     b >>= 1;
//   }
//   return ans;
// }

// int nCr(int n, int r) {
//   if (n < r or n < 0) return 0;
//   return 1ll * fact[n] * invf[r] % mod * invf[n - r] % mod;
// }

// int nPr(int n, int r) {
//   if (n < r or n < 0) return 0;
//   return 1ll * fact[n] * invf[n - r] % mod;
// }

// void precal() {
//   fact[0] = 1;
//   for (int i = 1; i < N; i++) {
//     fact[i] = 1ll * i * fact[i - 1] % mod;
//   }
//   invf[N - 1] = binexp(fact[N - 1], mod - 2);
//   for (int i = N - 2; i >= 0; i--) {
//     invf[i] = 1ll * invf[i + 1] * (i + 1) % mod;
//   }
// }

// void solve() {
//    int n; cin >> n;
//    vector<int> divs;
//    for(int i = 1; i * i <= n; i++) {
//    	if(n % i == 0) {
//    	  divs.push_back(i);
//    	  if(i != n / i) {
//    	  	divs.push_back(n / i);
//    	  }
//    	}
//    }
//    sort(divs.begin(), divs.end());
//    int ans = 0;
//    for(auto u : divs) {
//    	 int x = n;
//    	 int cur = 1;
//    	 int total_team = n / u;
//    	 int each_team_person = u;
//    	 //cout << total_team << " " << each_team_person << endl;
//    	 for(int i = 0; i < total_team; i++) {
//    	 	cur = (cur * nCr(x, each_team_person)) % mod;
//    	 	//cout << x << "\n";
//    	 	//cout << nCr(x, each_team_person) << "\n";
//    	 	x -= each_team_person;
//    	 }
//    	 cur = (cur * invf[total_team]) % mod;
//    	 ans = (ans + cur) % mod;
//    }
//    cout << ans << "\n";
// }
// int32_t main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   precal();

//   int t = 1, cs = 0; 
//   cin >> t;
//   while(t--) {
//   	cout << "Case " << ++ cs << ": ";
//     solve();
//   }
//   return 0;
// }

// // O(sqrtl(N) * N) * Test Case;

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 7, mod = 1e9 + 7;
#define int long long
int fact[N], invf[N];

int binexp(int a, int b) {
  int ans = 1 % mod; a %= mod; if (a < 0) a += mod;
  while(b) {
    if(b & 1) {
      ans = (ans * 1ll * a) % mod;
    }
    a = (a * 1ll * a) % mod;
    b >>= 1;
  }
  return ans;
}

int nCr(int n, int r) {
  if (n < r or n < 0) return 0;
  return 1ll * fact[n] * invf[r] % mod * invf[n - r] % mod;
}

int nPr(int n, int r) {
  if (n < r or n < 0) return 0;
  return 1ll * fact[n] * invf[n - r] % mod;
}

void precal() {
  fact[0] = 1;
  for (int i = 1; i < N; i++) {
    fact[i] = 1ll * i * fact[i - 1] % mod;
  }
  invf[N - 1] = binexp(fact[N - 1], mod - 2);
  for (int i = N - 2; i >= 0; i--) {
    invf[i] = 1ll * invf[i + 1] * (i + 1) % mod;
  }
}

void solve() {
   int n; cin >> n;
   vector<int> divs;
   for(int i = 1; i * i <= n; i++) {
   	if(n % i == 0) {
   	  divs.push_back(i);
   	  if(i != n / i) {
   	  	divs.push_back(n / i);
   	  }
   	}
   }
   sort(divs.begin(), divs.end());
   int ans = 0;
   for(auto u : divs) {
   	 int total_team = n / u;
   	 int each_team_person = u;
   	 int x = binexp(fact[each_team_person], total_team);
   	 int cur = fact[n] * binexp(x, mod - 2) % mod;
   	 cur = (cur * invf[total_team]) % mod;
   	 ans = (ans + cur) % mod;
   }
   cout << ans << "\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  precal();

  int t = 1, cs = 0; 
  cin >> t;
  while(t--) {
  	cout << "Case " << ++ cs << ": ";
    solve();
  }
  return 0;
}

// O(sqrtl(N) * log(N)) * Test Case;

// https://prnt.sc/_PtbdzEPR7LM

