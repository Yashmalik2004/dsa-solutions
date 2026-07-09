#include<bits/stdc++.h>
using namespace std;

class solution{
  public:
    bool solve(vector<int>&a){
      int n = a.size();
      unordered_set<int>st;
      int sum=0;
      for(int i=0;i<n;i++){
          sum+=a[i];
          if(sum==0) return true;
          if(st.find(sum)!=st.end()){
              return true;
          }
          st.insert(sum);
      }
      return false;
    }
};
int main(){
    vector<int>a(5);
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    solution obj;
    cout << (obj.solve(a) ? "true" : "false");
    return 0;
}