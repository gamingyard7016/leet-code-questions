class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        for(int i=0;i<n;i++){
            int left = i+1;
            while(left<n){
                if(nums[i]==nums[left]){
                    ans.push_back(nums[left]);
                    break;
                }
                left++;
            }
        }
        return ans;
    }
};