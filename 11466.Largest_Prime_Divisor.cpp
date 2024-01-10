//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e7 + 8;
bitset<N>f;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    f[0] = f[1] = true; 
    for(int i = 4; i <= N; i += 2) f[i] = true;
    for(int i = 3; i * i <= N; i += 2) {
      if(!f[i]) {
      for(int j = i * i; j <= N; j += 2 * i) f[j] = true;
     } // i*i because (i+i) always a even number large from 2, which is already cut in 2 er condition
   }
   vector<int> prime;
   for(int i = 2; i <= N; i++) {
      if(!f[i]) prime.push_back(i);
   }
    ll n;
    while(cin >> n and n) {
        if(n == 0) break;
        n = abs(n);
        vector<ll> ans;
        for(auto p : prime) {
          if(1ll * p * p > n) break;
          if(n % p == 0) {
             ans.push_back(p);
             while(n % p == 0) n /= p;
          }
        }
        if(n > 1) ans.push_back(n);
        if(ans.size() <= 1) cout << "-1\n";
        else cout << ans[ans.size() - 1] << "\n";
    }
    return 0;
}
