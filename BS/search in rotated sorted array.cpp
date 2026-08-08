// #include<b1ts/stdc++.h>
// using namespace std;

// int main(){
  
//   vector<int> arr={7,8,9,1,2,3,4,5,6};
//   int n = arr.size();
//   int key=1;
//   int l=0,r=n-1;

//   while(l<r){
//     int m = l+(r-l)/2;

//     if(arr[m]==key) {
//       cout<<m<<endl;
//       break;
//     }

//     if(arr[m]>key && arr[l]>key){
//       r=m-1;
//     }
//     else
//   }

// }
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0,r=n-1;
        while(l<=r){
            int m=l+(r-l)/2;
            if(nums[m]==target) return m;

            if(nums[l]<=nums[m])
            {
                if(nums[l]<=target && nums[m]>target) r=m-1;
                else l=m+1;
            }
            else
            {
                if(nums[m]<target && nums[r]>=target) l=m+1;
                else r=m-1;
            }
        }
        return -1;
    }
};