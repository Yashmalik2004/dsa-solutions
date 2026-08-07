#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;vector<int> arr(n);
  for(int i=0;i<n;i++) cin>>arr[i];
  int l=0,r=n-1;
  while(l<=r){
    int m=l+(r-l)/2;
    
    // if(arr[m]>arr[m-1] && arr[m]>arr[m+1]){
    //   if(m<(n-1) && m>0){
    //     cout<<arr[m]<<endl;
    //     break;
    //   }
    // }
    // if(arr[m]<arr[m+1]){
    //   l=m+1;
    // }
    // else{
    //   r=m-1;
    // }
    if(arr[m]<arr[m+1]){
      l=m+1;
    }
    else{
      r=m;
    }
  }
  return l;
  return 0;
}