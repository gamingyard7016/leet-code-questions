class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int n = nums.size();
        // Instead of return nums[n-1], what if you do:
      //  if(n==1)return {nums[0], nums[0]}; // Vector initialization
        vector<int> arr = nums;
        for(int i=0;i<=n-1;i++){
            arr.push_back(nums[n-i-1]);
        }
        return arr;
    }
};