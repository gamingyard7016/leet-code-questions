class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int n =nums.size();
        int sum = nums[0];
        for(int i=1;i<n;i++){
            if((i+2)%2 != 0){
                sum -= nums[i];
            }
            else sum += nums[i];
        }
        return sum;
    }
};