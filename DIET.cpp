#include <iostream>
using namespace std;

int main() {
	int t,n,k;
	cin>>t;
	while (t--){
	    int flag=0;
	    cin>>n>>k;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for (int i=0;i<n;i++){
	        if(a[i]<k){
	            cout<<"NO "<<i+1<<endl;
	            flag=1;
	            break;
	        }
	        else{
	            a[i+1]=a[i+1]+a[i]-k;
	         }
	    }
	         if(flag==0){
	             cout<<"YES"<<endl;
	         }
	    }
	return 0;
}