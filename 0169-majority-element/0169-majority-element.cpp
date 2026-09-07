class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            int cut = 0;
            for(int j=0;j<n;j++){
                if(nums[i]==nums[j]){
                    cut++;
                }
                if(cut>n/2) return nums[i];
            }
        }
        return nums[1];
    }
};