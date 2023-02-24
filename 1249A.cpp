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
        int n;
        cin>>n;
        int arr[n];
        bool ok=true;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int pointer_1=0;pointer_1<n;pointer_1++)
        {
            for(int pointer_2=0;pointer_2<pointer_1;pointer_2++)
            {
                ok &=(abs(arr[pointer_1]-arr[pointer_2])!=1);
            }
        }
        cout<<2-ok<<endl;

    }
}