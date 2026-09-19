class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>newvector (nums.size()+1);
        vector<int>ans;
        for(int i=0;i<nums.size();i++) newvector[nums[i]]++;
        for(int i=1;i<=nums.size();i++) if(newvector[i] == 0) ans.push_back(i);
        return ans;
    }
};