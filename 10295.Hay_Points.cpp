//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n, m; cin >> n >> m;
   map<string, int > mp;
   for(int i = 0; i < n; i++) {
      string s; int x; cin >> s >> x;
      mp[s] = x;
   }
   for(int i = 0; i < m; i++) {
      string word;
      ll sum = 0;
      while(cin >> word and word != ".") {
        if(mp.find(word) != mp.end()) {
          sum += mp[word];
        }
        //cout << word << endl;
      }
      cout << sum << endl;
   }
   return 0;
}
