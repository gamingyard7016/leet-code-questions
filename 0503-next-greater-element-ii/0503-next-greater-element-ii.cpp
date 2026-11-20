class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        //hfyt
        vector<int> ans(n,-1);
        stack<int> st;

        for(int i = n-1;i>=0;i--){
            st.push(nums[i]);
        }

        for(int i = n-1; i>=0; i--){
            while(st.size() != 0 && nums[i] >= st.top()) st.pop();

            ans[i] = st.size() != 0 ? st.top():-1;

            st.push(nums[i]);
        }
        return ans;
    }
};