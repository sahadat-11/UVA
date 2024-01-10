//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 1e9;
bool flag[N];
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   ll x;
   vector<ll> v;
   map<ll, ll> mp;
   while(cin >> x) {
      v.push_back(x);
      mp[x]++;
   }
   for(auto u : v) {
      if(!flag[u]) {
         cout << u << " " << mp[u] << "\n";
         flag[u] = true;
      }
   }
   return 0; 
}
