//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e7 + 8;
int spf[N];
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   for(int i = 1; i < N; i++) spf[i] = i;
   for(int i = 2; i < N; i++) {
   	if(spf[i] == i) {
   		for(int j = i; j < N; j += i) {
   			spf[j] = min(spf[j], i);
   		}
   	}
   }
   //int n; cin >> n;
   //for(int i = 1; i < n; i++) cout << spf[i] << " ";
   int n;
   while(cin >> n and n) {
   	int x = n;
   	int cnt = 0;
   	while(x > 1) {
   		int k = spf[x];
   		cnt++;
   		while(x % k == 0) {
   			x /= k;
   		}
   	}
   	cout << n << " : " << cnt << "\n";
   }
   return 0;
}
