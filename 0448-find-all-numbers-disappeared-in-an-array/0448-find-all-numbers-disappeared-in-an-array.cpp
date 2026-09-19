class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

        // Final answer store karne ke liye
        vector<int> ans;

        // Har number ka count store karenge
        vector<int> tmp(nums.size() + 1);

        // nums ke har number ko count karo
        for(int i = 0; i < nums.size(); i++) {

            int x = nums[i];

            tmp[x]++;
        }

        // 1 se n tak check karo
        for(int i = 1; i <= nums.size(); i++) {

            // Agar count 0 hai,
            // matlab number array mein nahi mila
            if(tmp[i] == 0) {

                ans.push_back(i);
            }
        }

        return ans;
    }
};