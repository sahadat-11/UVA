//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<int> Primefactor(int n) {
    vector<int> primes_facts;
    for(int i = 2; i * i <= n; i++) {
      if(n % i == 0) {
        while(n % i == 0) {
          primes_facts.push_back(i);
          n /= i;
        }
      }
    }
    if(n > 1) {
      primes_facts.push_back(n);
    }
    return primes_facts;
}
int32_t main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n, d;
   while(cin >> n >> d and !(n == 0 and d == 0)) {
      map<int, int> nf, df;
      int count_of_divisor = 1;
      for(int i = 1; i <= n; i++) {
         auto facts = Primefactor(i);
         for(auto p : facts) {
            nf[p]++;
         }
      }
      auto facts = Primefactor(d);
      for(auto p : facts) {
         df[p]++;
      }
      int ans = 1;
      for(auto [p, fre] : nf) {
         if(nf[p] < df[p]) {
            ans = 0;
         }
         else {
            ans = 1ll * ans * (nf[p] - df[p] + 1);
         }
      }
      for(auto [p, fre] : df) {
         if(nf[p] < df[p]) {
            ans = 0;
         }
      }
      cout << ans << "\n";
   }
   return 0;
}
// https://prnt.sc/c0rLMeIRZpa_
