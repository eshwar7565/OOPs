    #include<bits/stdc++.h>
     
    using namespace std;

     
    int main(){
      ios::sync_with_stdio(false);
      cin.tie(nullptr);
      int t;
      cin >> t;
      while(t>0){
        t--;
        int n;
        cin >> n;
        vector<int> a(n);
        for(auto &nx : a){cin >> nx;}
        bool res=false;
        for(int i=0;i<n;i++){
          for(int j=i+1;j<n;j++){
            if(__gcd(a[i],a[j])<=2){res=true;}
          }
        }
        if(res){cout << "Yes\n";}
        else{cout << "No\n";}
      }
      return 0;
    }