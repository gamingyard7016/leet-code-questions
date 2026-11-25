class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int mid = n/2;
        int steps = 0;

        for(int i=0; i<n; i++){
            if(nums[i] == nums[n/2]) continue;
            else steps += abs(nums[i] - nums[n/2]);
        }
        return steps;


    }
};