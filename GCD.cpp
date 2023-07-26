//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  int n;
  while (cin >> n and n != 0) {
    int g = 0;
    for (int i = 1; i <= n; ++i) {
      for (int j = i + 1; j <= n; ++j) {
        g += ( __gcd(i, j));
      }
    }
    cout << g << endl;
  }
  return 0;
}