#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  vector<int> arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  //temp arr approach
  // vector<int> temp;
  // for(int i=0;i<n;i++){
  //   if(arr[i]!=0){
  //     temp.push_back(arr[i]);
  //   }
  // }
  // while(temp.size()<n){
  //   temp.push_back(0);
  // }
  // for(int i=0;i<n;i++){
  //   arr[i]=temp[i];
  // }
  // two traversal approach...
  // one traversal approach
  int c=0;
  for(int i=0;i<n;i++){
    if(arr[i]!=0){
      swap(arr[c],arr[i]);
      c++;
    }
  }
  for(int i:arr){
    cout<<i<<" ";
  }
  return 0;
}