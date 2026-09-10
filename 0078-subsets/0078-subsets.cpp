class Solution {
public:
    void power(int idx, vector<int> ans, vector<int>& arr,vector<vector<int>>&finalans){
       if(idx == arr.size()){
        finalans.push_back(ans);
        return;
       }
       power(idx+1,ans,arr,finalans); //spik
        ans.push_back(arr[idx]);
        power(idx+1,ans,arr,finalans); //pick
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>finalans;
        vector<int>ans;
        power(0,ans,nums,finalans);
        return finalans;
    }
};