class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        int n =words.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            int left =0;
            string nums = words[i];
            int right = nums.size();
            while(left<right){
                if(nums[left] == x ){
                    ans.push_back(i);
                    break;
                }
                left++;
            }
        }
        return ans;
    }
};