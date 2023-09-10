//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1005;
int dp[N][N];
string s;
int f(int l, int r) {
  if(l > r) return 0;
  if(l == r) return 1; // lenght odd one point l and r same
  int &ans = dp[l][r]; // aba
  if(ans != -1) return ans;
  ans = 0;
  if(s[l] == s[r]) {
    ans = 2 + f(l + 1, r - 1);
  }
  else {
    ans = max(f(l + 1, r), f(l, r - 1));
  }
  return ans;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  cin.ignore();
  while(t--) {
    memset(dp, -1, sizeof dp);
    getline(cin, s);
    int n = s.size();
    cout << f(0, n - 1) << "\n";
  }
  return 0;
}