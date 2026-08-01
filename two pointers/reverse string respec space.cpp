#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  int n=s.size();
  vector<char>arr;
  int r=n-1;
  for(int i=0;i<n/2;i++){
    if(s[i]==' ' && s[r]==' '){
      r--;
      continue;
    }
    else{
      swap(s[i],s[r]);
      r--;
    }
  }
  cout<<s;
  return 0;
}