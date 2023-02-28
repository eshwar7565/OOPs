#include<bits/stdc++.h>
using namespace std;
int main()
{
    

   ios_base::sync_with_stdio(false);
   cin.tie(0);
 
   int t;
   cin >> t;
   while(t--)
   {
        int n;
        cin >> n;
 
        int ar[n];
        for(int i=0;i<n;i++)
                cin >> ar[i];
 
        bool ok=true;
        for(int i=0;i<n;i++)
        {
            if(ar[i]%2!=ar[i%2]%2)
                    ok=false;
        }
 
        cout << (ok?"Yes\n":"No\n");
   }
}
 
