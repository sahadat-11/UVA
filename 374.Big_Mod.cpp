//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int binexp(int a, int b, int mod) {
   int ans = 1;
   while(b) {
      if(b & 1) {
         ans = (ans * 1ll * a) % mod; // type cast for integer overflow
      }
      a = (a * 1ll * a) % mod;
      b >>= 1; // if b in odd(if 0th bit is set)
   }
   return ans;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int a, b, mod;
  while(cin >> a >> b >> mod) {
    cout << binexp(a, b, mod) << "\n";
  }
  return 0;
}