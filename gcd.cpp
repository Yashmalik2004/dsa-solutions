// class Solution {
// public:
//     int findGCD(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         int maxi=nums[nums.size()-1];
//         int mini=nums[0];

//         while(mini!=0){
//             int temp=mini;
//             mini=maxi%mini;
//             maxi=temp;
//         }
//         return maxi;
//     }
// };
class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxi=nums[nums.size()-1];
        int mini=nums[0];

        while(mini!=0){
            int temp=mini;
            mini=maxi%mini;
            maxi=temp;
        }
        return maxi;
    }
};