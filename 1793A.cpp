#include<bits/stdc++.h>
using namespace std;
#define REP(i,a,b) for (int i = a; i < b; i++)

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        long long  a,b,m,n;
        cin>>a>>b;
        cin>>n>>m;
        long long  q = n /(m + 1);
        long long r = n - q * (m + 1);
         cout<<q * min(a * m, b * (m + 1))+ r*min(a,b)<<endl;
    
     }
}
