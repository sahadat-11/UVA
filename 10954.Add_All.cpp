//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n;
   while(cin >> n and n) {
      int a[n];
      for(int i = 0; i < n; i++) cin >> a[i];
      priority_queue<int, vector<int>, greater<int>> pq;
      for(int i = 0; i < n; i++) pq.push(a[i]);
      ll sum = 0;
      while(pq.size() > 1) {
         int x = pq.top();
         pq.pop();
         int y = pq.top();
         pq.pop();
         sum += x + y;
         pq.push(x + y);
      }
      cout << sum << "\n";
   }
   return 0;
}
