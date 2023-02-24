#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int n,k,v;
	    cin>>n>>k>>v;
	    int arr[n];
	    int sum=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        sum+=arr[i];
	    }
	    int totalsum = v*(n+k);
	    int extra = totalsum-sum ;
	    if(extra%k==0 && extra>0)
	    {
	        int res = (extra)/k;
	    cout<<res<<endl;
	    }
	    else
	    {
	        cout<<"-1"<<endl;
	    }
	}
	return 0;
}
