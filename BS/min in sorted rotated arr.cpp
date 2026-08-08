#include<bits/stdc++.h>
using namespace std;


class Solution {
  public:
    int findMin(vector<int>& arr) {
        // code here
        int n =arr.size();
        int l=0,r=n-1;
        while(l<=r){
            int m = l+(r-l)/2;
            if(arr[m]>arr[r]) l=m+1;
            else if(arr[l]>arr[m]) r=m;
            else return arr[l];
        }
        return -1;
    }
};

int main(){
  Solution s;
  vector<int> arr={7,8,9,1,2,3,4,5,6};
  cout<<s.findMin(arr)<<endl;
  return 0;
  
}