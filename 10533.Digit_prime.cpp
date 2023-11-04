//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e6 + 7;
bitset<N>f; // initially false;
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   f[0]=f[1]=true; 
    for(ll i = 2; i * i <= N; i++){
     if(!f[i]){
          for(ll j = i * i; j <= N; j += i) f[j]=true;
      }
   }
   vector<int> prime;
   for(int i = 2; i <= N; i++) {
     if(!f[i]) prime.push_back(i);
   }
   //for(auto p : prime) cout << p << " ";
   vector<int> ans;
   for(auto p : prime) {
      int x = p;
      int sum = 0;
      while(x) {
          sum += x % 10;
          x /= 10;
      }
      if(!f[sum]) ans.push_back(p);
   }
   //for(auto x : ans) cout << x << endl;
   int t; cin >> t;
   while(t--) {
      int l, r; cin >> l >> r;
      int lb = lower_bound(ans.begin(), ans.end(), l) - ans.begin();
      int ub = upper_bound(ans.begin(), ans.end(), r) - ans.begin();
      //cout << ub << " " << lb << endl;
      cout << ub - lb << "\n";
   }
   return 0;
}
// O(t * log(N))

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e6 + 7;
bitset<N>f; // initially false;
bool a[N];
int pre[N];
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   f[0]=f[1]=true; 
    for(ll i = 2; i * i <= N; i++){
     if(!f[i]){
          for(ll j = i * i; j <= N; j += i) f[j]=true;
      }
   }
   vector<int> prime;
   for(int i = 2; i <= N; i++) {
     if(!f[i]) prime.push_back(i);
   }
   //for(auto p : prime) cout << p << " ";
   for(auto p : prime) {
      int x = p;
      int sum = 0;
      while(x) {
          sum += x % 10;
          x /= 10;
      }
      if(!f[sum]) a[p] = true;
   }
   //for(auto x : ans) cout << x << endl;
   for(int i = 1; i < N; i++) {
      pre[i] = pre[i - 1] + (a[i]);
   }
   int t; cin >> t;
   while(t--) {
      int l, r; cin >> l >> r;
      cout << pre[r] - pre[l - 1] << "\n";
   }
   return 0;
}
// O(t)