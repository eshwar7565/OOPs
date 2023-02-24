#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int A[n];
        int D[n];
        int simul=1;
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
        for(int j=0;j<n;j++)
        {
            cin>>D[j];
        }
        int c[10001]={0},num=0;
    for(int i=0;i<n;i++)
    {
        for(int j=A[i];j<D[i];j++)
        {
            c[j]++;
            
            num=max(num,c[j]);
        }
    }
    cout<<num<<endl;
    }
    
   
	return 0;
}
