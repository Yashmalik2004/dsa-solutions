#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<int>arr={1,2,3,4,5};
  cout<<lower_bound(arr.begin(),arr.end(),4)-arr.begin()<<endl; // we subtracted because the arr.begin() is pointing at the iterator, not the index, so we minus lower bound pointer with arr.begin pointer to get the distance between them, thus giving us the index.
  return 0;

}