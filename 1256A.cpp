#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int q;
    cin>>q;
    while(q--)
    {
        int a,b,n,S;
        cin>>a>>b>>n>>S;
        if(S%(n)<=b && (1ll*n*a+b)>=S)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}