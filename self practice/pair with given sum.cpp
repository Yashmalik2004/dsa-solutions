#include<bits/stdc++.h>
using namespace std;

class solution{
  public:
    void solve(vector<int>&a,int target){
      int n = a.size();
      unordered_map<int,int>mp;
      for(int i=0;i<n;i++){
          if(mp.find(target-a[i])!=mp.end()){
              cout<<a[i]<<" "<<a[mp[target-a[i]]]<<"\n";
          }
          mp[a[i]]=i;
      }
    }
};
int main(){
    vector<int>a(5);
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    int t;
    cin>>t;
    solution obj;
    obj.solve(a,t);
    return 0;
}