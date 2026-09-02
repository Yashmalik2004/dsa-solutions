
// // //print 1 to n using recursion
// // #include<bits/stdc++.h>
// // using namespace std;

// // void fnc(int i,int n){
// //   if(i>n){
// //     return;
// //   }
// //   cout<<i<<" ";
// //   fnc(i+1,n);
// // }

// // int main(){
// //   int n;
// //   cin>>n;
// //   fnc(1,n);
// //   return 0;
// // }

// // print n to 1 using recursion

// #include<bits/stdc++.h>
// using namespace std;

// void fnc(int n){
//   if(n==0){
//     return;
//   }
//   cout<<n<<" ";
//   fnc(n-1);
// }
// int main(){
//   int n;
//   cin>>n;
//   fnc(n);
//   return 0;
// }

// sum of n numbers using recursion
#include<bits/stdc++.h>
using namespace std;

int fnc(int n,int sum){
  if(n==0) return sum;
  sum+=n;
  fnc(n-1,sum);
}
int main(){
  int n;
  cin>>n;
  int sum = fnc(n,0);
  cout<<sum;
  return 0;
}












































































