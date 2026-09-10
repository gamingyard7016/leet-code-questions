class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int x = nums.size();
        vector<int>n;
        vector<int>p;
        vector<int>ans;
        for(int i=0;i<x; i++){
            if(nums[i]>0) p.push_back(nums[i]);
            else n.push_back(nums[i]);
        }
        for(int i=0;i<x/2;i++){
            ans.push_back(p[i]); 
            ans.push_back(n[i]); 
        }
        return ans;
    }
};