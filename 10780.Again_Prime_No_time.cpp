//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 5e3 + 9;
bitset<N>f;
void sieve () {
   f[0] = f[1] = true; 
    for(int i = 4; i <= N; i = i + 2) f[i] = true;
    for(int i = 3; i * i < N; i += 2) {
      if(!f[i]){ 
         for(int j = i * i; j < N; j += 2*i) f[j] = true;
     }
   }
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   sieve();
   vector<int>prime;
   for(int i = 2; i < N; i++) {
      if(!f[i]) prime.push_back(i);
   }
   int t, cs = 0; cin >> t;
   while(t--) {
      int m, n; cin >> m >> n;
      int ans = INT_MAX;
      for(auto p : prime) {
         if(p > m) break;
         if(m % p == 0) {
            int exp_of_p = 0;
            while(m % p == 0) {
               exp_of_p++;
               m /= p;
            }
            int exp_of_n_fact = 0;
            for(int i = p; i <= n; i += p) {
            int x = i; 
            while(x % p == 0) {
               exp_of_n_fact++;
               x /= p;
            }
           } 
           ans = min(ans, exp_of_n_fact / exp_of_p);
         } 
      }
      cout << ans << "\n";
   }
  return 0;
 }