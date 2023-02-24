#include<bits/stdc++.h>
using namespace std;
 
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    int need=1;
    while(t--) {
        int n;
        cin >> n;
        int need=1;
        vector<int> res;
        while (n>0) {
            int d=n%10;
            if(d!=0) {
                res.push_back(d*need);
            }
            n/=10;
            need*=10;
        }
        cout << res.size() << '\n';
        for (int i=0; i<=res.size()-1; i++) {cout << res[i] << ' ';}
    }
    return 0;
}