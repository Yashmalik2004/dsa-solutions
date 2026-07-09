#include<bits/stdc++.h>
using namespace std;
int happy(int i,int task,vector<int>&a,vector<int>&b,vector<int>&c,vector<vector<int>>&dp){
  if(i<0) return 0;
  if(task==0) return max(happy(i-1,1,a,b,c,dp)+b[i],happy(i-1,2,a,b,c,dp)+c[i]);
  if(task==1) return max(happy(i-1,0,a,b,c,dp)+a[i],happy(i-1,2,a,b,c,dp)+c[i]);
  if(task==2) return max(happy(i-1,0,a,b,c,dp)+a[i],happy(i-1,1,a,b,c,dp)+b[i]);
}

int main(){
  int n;
  cin>>n;
  vector<int>a(n),b(n),c(n);
  for(int i=0;i<n;i++){
    cin>>a[i]>>b[i]>>c[i];
  }
  vector<vector<int>>dp(3,vector<int>(n,-1));
  cout<<max({happy(n-1,0,a,b,c,dp),happy(n-1,1,a,b,c,dp),happy(n-1,2,a,b,c,dp)});
  return 0;
}