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