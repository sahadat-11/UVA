//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  ll n; cin >> n; ll a[n];
  for(ll i = 0; i < n; i++) cin >> a[i];
  sort(a, a + n);
  ll cnt = 0;
  for(int i = 0; i < n; i++) {
    for(int j = i + 1; j < n; j++) {
      for(int k = j + 1; k < n; k++) {
        if(a[i] + a[j] == a[k]) cnt++;
      }
    }
  }
  cout << cnt << "\n";
  return 0;
}
// O(n * n * n)


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  ll n; 
  while(cin >> n and n != -1) {
  ll a[n];
  for(ll i = 0; i < n; i++) cin >> a[i];
  sort(a, a + n);
  ll ans = 0;
  for(int i = 0; i < n - 2; i++) {
     int l = i + 1, r = i + 2;
     while(l < n - 1 and r < n) {
         if(a[i] + a[l] < a[r]) l++;
         else if(a[i] + a[l] > a[r]) r++;
         else {
           int c1= 1, c2 = 1;
           while(a[i] + a[++l] == a[r] and l < n - 1) c1++;
           while(a[i] + a[l - 1] == a[++r] and r < n) c2++;
           ans += (c1 * c2);
         }
     }
  }
  cout << ans << "\n";
  }
  return 0;
}
// O(n *)
//https://prnt.sc/DqdDz-KTA1hK