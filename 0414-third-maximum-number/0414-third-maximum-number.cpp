class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int count = 1;
        int ans = nums[n-1];
        for (int i = n-2; i >= 0; i--) {
            if(nums[i] != nums[i+1]){
                count++;
                ans = nums[i];
                if(count==3)return ans;
            }
        }
        return nums[n-1];
    }
};