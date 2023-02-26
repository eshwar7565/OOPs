#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    string s, t;
    cin >> n >> m >> s >> t;
    reverse(t.begin(), t.end());
    s += t;
    int count = 0;
    for (int i = 1; i < n + m; ++i) 
    {
       if(s[i - 1] == s[i])
       { count ++;
    }
    }
    if(count <= 1)
    { cout<<"YES\n" ;
     }
     else{
           cout<<"NO\n";
     }
  }
}