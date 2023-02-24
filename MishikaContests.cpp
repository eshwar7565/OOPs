#include <bits/stdc++.h>

using namespace std;

int main() {
 
		int n, k;
		cin >> n >> k;
		int array[n];
		int leftsum=0;
		int rightsum =0;
        for(int i=0;i<n;i++)
        {
            cin>>array[i];
        }
        
        for(int i=0;i<n;i++)
        {
            if(array[i]<=k)
            {
                leftsum++;
            }
            else if(array[i]>k)
            {
                break;
            }
        }
        for(int i=n-1;i>-1;i--)
        {
            if(array[i]<=k)
            {
                rightsum++;
            }
            else if(array[i]>k)
            {
                break;
            }
        }
        if(leftsum+rightsum<n)
        {
        cout<<rightsum+leftsum<<endl;
        }
        else
        {
            cout<<n<<endl;
        }
	}
