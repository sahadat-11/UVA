//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int l; string s;
  while(cin >> l >> s and l) {
     int pre = -1;
     char prec = ' ';
     int mn = INT_MAX;
     bool found = false;
     for(int i = 0; i < l; i++) {
      if(s[i] == 'R' and prec == 'D' and found) {
        mn = min((i - pre), mn);
        pre = i;
        prec = s[i];
      }
      if(s[i] == 'R' and prec == 'R' and found) {
        pre = i;
        prec = s[i];
      }
      if(s[i] == 'D' and prec == 'R' and found) {
        mn = min((i - pre), mn);
        pre = i;
        prec = s[i];
      }
      if(s[i] == 'D' and prec == 'D' and found) {
        pre = i;
        prec = s[i];
      }
      if((s[i] == 'R' or s[i] == 'D') and !found) {
        found = true;
        pre = i;
        prec = s[i];
      }
      //cout << mn << endl;
    }
    if(s.find('Z') != -1) mn = 0;
    cout << mn << "\n";
  }
  return 0;
  
}

// approach 2:

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{  
    int L;
    while (cin >> L, L != 0)
    {
        string S;
        cin >> S;

        int minDistance = L;
        int lastR = -L, lastD = -L;
        // Linearly scan the highway.
        for (int i = 0; i < L; ++i)
        {
            // Restaurant and drugstore.
            if (S[i] == 'Z')
            {
                minDistance = 0;
                break;
            }
            // Restaurant.
            else if (S[i] == 'R')
            {
                minDistance = min(minDistance, i - lastD);
                lastR = i;
            }
            // Drugstore.
            else if (S[i] == 'D')
            {
                minDistance = min(minDistance, i - lastR);
                lastD = i;
            }
        }
        cout << minDistance << endl;
    }
    return 0;
}