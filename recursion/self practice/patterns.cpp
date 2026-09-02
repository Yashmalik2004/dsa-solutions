
// //print 1 to n using recursion
// #include<bits/stdc++.h>
// using namespace std;

// void fnc(int i,int n){
//   if(i>n){
//     return;
//   }
//   cout<<i<<" ";
//   fnc(i+1,n);
// }

// int main(){
//   int n;
//   cin>>n;
//   fnc(1,n);
//   return 0;
// }

// print n to 1 using recursion

#include<bits/stdc++.h>
using namespace std;

void fnc(int n){
  if(n==0){
    return;
  }
  cout<<n<<" ";
  fnc(n-1);
}
int main(){
  int n;
  cin>>n;
  fnc(n);
  return 0;
}