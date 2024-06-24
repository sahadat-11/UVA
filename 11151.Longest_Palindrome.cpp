// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// const int N = 1005;
// int dp[N][N];
// string s;

// int func(int l, int r) {
//   if(l > r) return 0;
//   if(l == r) return 1; // lenght odd one point l and r same
//   int &ans = dp[l][r]; // aba
//   if(ans != -1) return ans;
//   ans = 0;
//   if(s[l] == s[r]) {
//     ans = 2 + func(l + 1, r - 1);
//   }
//   else {
//     ans = max(func(l + 1, r), func(l, r - 1));
//   }
//   return ans;
// }

// int main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   int t; cin >> t;
//   cin.ignore();
//   while(t--) {
//     memset(dp, -1, sizeof dp);
//     getline(cin, s);
//     int n = s.size();
//     cout << func(0, n - 1) << "\n";
//   }
//   return 0;
// }

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1005;
int dp[N][N];
string s;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  cin.ignore();
  while(t--) {
    getline(cin, s);
    int n = s.size();
    //cout << func(0, n - 1) << "\n";
    memset(dp, 0, sizeof dp);
    for(int len = 1; len <= n; len++) {
      for(int l = 0; l + len - 1 < n; l++) {
        int r = l + len - 1;
        int &ans = dp[l][r];
        if(l == r) {
          ans = 1;
        }
        else {
          ans = 0;
          if(s[l] == s[r]) {
            ans = 2 + dp[l + 1][r - 1];
          }
          else {
            ans = max(dp[l + 1][r], dp[l][r - 1]);
          }
        }
      }
    }
    cout << dp[0][n - 1] << "\n";
  }
  return 0;
}