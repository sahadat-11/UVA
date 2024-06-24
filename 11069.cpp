//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 80, mod = 1e9 + 7;
#define int long long
int f[N];

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  f[1] = 1; f[2] = 2; f[3] = 2;
  for(int i = 4; i < N; i++) {
  	f[i] = f[i - 2] + f[i - 3];
  }
  // for(int i = 1; i <= 30; i++) {
  // 	cout << f[i] << " ";
  // }
  int n;
  while(cin >> n) {
  	cout << f[n] << "\n";
  }
  return 0;
}

// https://prnt.sc/caQ5JLesUQ7G