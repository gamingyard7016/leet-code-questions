class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int x = nums.size();
        vector<int> ans(x,0);
        int p = 0;
        int n = 1;
        for(int i=0;i<x;i++){
            if(nums[i]>0){
                ans[p] = nums[i];
                p+=2;
            }
            else{
                ans[n] = nums[i];
                n +=2;
            }
        }
        return ans;
    }
};