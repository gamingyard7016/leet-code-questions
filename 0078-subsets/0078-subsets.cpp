class Solution {
public:
    void set(int i, vector<int> ans, vector<int>& nums, vector<vector<int>>& p){
        if(i == nums.size()){
            p.push_back(ans);
            return;
        }
        set(i+1,ans,nums,p);
        ans.push_back(nums[i]),
        set(i+1,ans,nums,p);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>ans;
        vector<vector<int>>p;
        set(0,ans,nums,p);
        return p;
    }
};