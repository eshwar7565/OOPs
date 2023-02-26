#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
 
    int t; cin>>t;
    while (t--)
    {
        int n,m,k; 
        cin>>n>>m>>k;

        string a,b,c; 
        cin>>a>>b;

        // Sorting in descending order of characters

        sort(a.begin(),a.end(),greater<char>());
        sort(b.begin(),b.end(),greater<char>());
 
        int pointerona=0,pointeronb=0;

        //until atleast one of the string is empty
        while (!a.empty() && !b.empty())
        {
            bool gde=b.back()<a.back();
            if (gde && pointeronb==k) gde=0;
            if (!gde && pointerona==k) gde=1;
 
            if (gde) c.push_back(b.back()),pointeronb++,pointerona=0,b.pop_back();
            else c.push_back(a.back()),pointerona++,pointeronb=0,a.pop_back();
        }
 
        cout<<c<<"\n";
    }
}