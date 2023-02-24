#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max = arr[0];
    int min =arr[0] ;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
        else{
            continue;
        }
         
    }
    for(int i=0;i<n;i++)
    {
    if(min>arr[i])
        {
            min =arr[i];
        }
        else{
            continue;
        }
    }
    cout<<min<<" "<<max<<endl;
}