    #include <bits/stdc++.h>
    using namespace std;
    int main(){
    int t;
    cin>>t;
    while(t--){
    int n,k;
    cin>>n>>k;
    int hsh1[26]={0};
    int hsh2[26]={0};
    string s;
    cin>>s;
    for(int i=0;i<s.length();++i){
      if((int)s[i]<=90){
        hsh1[s[i]-65]+=1;
      }
      else{
        hsh2[s[i]-97]+=1;
      }
    }
    int ct=0;
    int ct2=0;
    for(int i=0;i<26;++i){
      ct+=abs((hsh1[i]-hsh2[i])/2);
      ct2+=min(hsh1[i],hsh2[i]);
    }
    cout<<ct2+min(k,ct)<<endl;
    }
    }