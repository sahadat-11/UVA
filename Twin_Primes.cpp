//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e8 + 9;
bitset<N> f; 
void sieve() {
   f[0] = f[1] = true;
   for(int i = 4; i <= N; i += 2) f[i] = true;
   for(int i = 3; i * i <= N; i += 2) {
      if(!f[i]) {
         for(int j = i * i; j <= N; j += 2 * i) f[j] = true;
      }
   }
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   sieve();
   vector<pair<int, int>> twin_prime;
   for(int i = 3; i < N; i++) {
      if(!f[i] and !f[i + 2]) {
         twin_prime.push_back({i, i + 2});
      }
   }
   int n;
   while(cin >> n) {
      cout << "(" << twin_prime[n - 1].first <<", " << twin_prime[n - 1].second << ")\n";
   }
   return 0;
}
