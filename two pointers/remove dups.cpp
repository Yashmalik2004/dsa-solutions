// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//   int n;
//   cin>>n;
//   vector<int>arr(n);
//   for(int i=0;i<n;i++){
//     cin>>arr[i];
//   }
//   int c=1;
//   for(int i=1;i<n;i++){
//     if(arr[i]!=arr[i-1]){
//       arr[c++]=arr[i];
//     }
//   }
//   for(int i=0;i<c;i++){
//     cout<<arr[i]<<" ";
//   }
//   return 0;
// }
#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  vector<int>arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int c=1;
  for(int i=1;i<n;i++){
    if(arr[i]!=arr[i-1]){
      arr[c++]=arr[i];
    }
  }
  for(int i=0;i<c;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}