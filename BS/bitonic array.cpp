#include<bits/stdc++.h>
using namespace std;

int search(vector<int>&arr){
    int n=arr.size();
    int l=0,r=n-1;
    while(l<r){
        int m=l+(r-l)/2;
        if(arr[m]<arr[m+1]){
            l=m+1;
        }
        else r=m;
    }
    return arr[l];
}

int main(){
  vector<int> arr={5,6,7,8,9,3,2,1};
  cout<<search(arr)<<endl;
  return 0;
}