//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t, cs = 0; cin >> t;
   while(t--) {
      cout << "Case " << ++cs << ": ";
      int n, m; cin >> n >> m; string s1[n], s2[m];
      cin.ignore();
      for(int i = 0; i < n; i++) {
         getline(cin, s1[i]);
      }
      for(int i = 0; i < m; i++) {
         getline(cin, s2[i]);
      }
     // cout << n * m << "\n";
      set<string> st;
      for(int i = 0; i < n; i++) {
         for(int j = 0; j < m; j++) {
            string ans = s1[i] + s2[j];
            st.insert(ans);
         }
      }
      cout << st.size() << "\n";
   }
   return 0;
}