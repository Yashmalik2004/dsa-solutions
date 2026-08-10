#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  vector<int>v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
  int ele;
  cin>>ele;
  int c=0;
  for(int i=0;i<n;i++){
    if(v[i]!=ele){
      swap(v[c],v[i]);
      c++;
    }
  }
  for(int i:v){
    cout<<i<<" ";
  }
  return 0;
}