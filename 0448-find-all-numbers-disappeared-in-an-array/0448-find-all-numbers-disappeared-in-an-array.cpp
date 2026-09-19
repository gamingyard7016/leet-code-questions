class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        vector<int> tmp(nums.size()+1);
        for(int x:nums){
            tmp[x]++;
        }
        for(int i=1; i<=nums.size();i++){
            if(tmp[i] == 0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};