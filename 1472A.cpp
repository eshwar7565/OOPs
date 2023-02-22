#include<bits/stdc++.h>
using namespace std;
#define REP(i,a,b) for (int i = a; i <b; i++)

int main()
{
    int t;
    cin>>t;
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    REP(i,0,t)
    {
        int x,y,z;
        cin>>x>>y>>z;
        int result=1;
        while(x%2==0)
        {
            x/=2;
            result *=2;
        }
        while(y%2==0)
        {
            y /=2;
            result *=2;
        }
        
        if(result>=z)
        {
            cout<<"yes\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    
}
