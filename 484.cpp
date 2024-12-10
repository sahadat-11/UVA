//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  vector<int> v;
  map<int, int> mp;
  int n;
  while(cin >> n) {
    if(mp[n] == 0) {
        v.push_back(n);
    }
    mp[n]++;
  }
  for(auto u : v) {
    cout << u << " " << mp[u] << "\n";
  }
  return 0;
}