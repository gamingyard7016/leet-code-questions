class Solution {
public:
    void set(int i, vector<int>ans,vector<int>& arr,vector<vector<int>>&p){
        if(i == arr.size()){
            p.push_back(ans);
            return;
        }
        set(i+1,ans,arr,p);
        ans.push_back(arr[i]);
        set(i+1,ans,arr,p);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>ans;
        vector<vector<int>>p;
        set(0,ans,nums,p);
        return p;
    }
};