#include<bits/stdc++.h>
using namespace std;

 // namespace st

//  int main()
//  {
//     vector<int> v= {2,3,5};
//     cout<< all_of(v.begin(),v.end(),[](int x){return x>0;});
//  }
bool ispositive(int x)
{
    return x;
}
  int main()
 {
    vector<int> v= {2,3,5};
    cout<< all_of(v.begin(),v.end(),ispositive);
      cout<< none_of(v.begin(),v.end(),ispositive);
        cout<< any_of(v.begin(),v.end(),ispositive);
 }