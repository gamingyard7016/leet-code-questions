class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int cm = 1;
        int off = 0;
        int uniq = 1;
        while(cm<n){
            if(nums[cm]==nums[cm-1]){
                cm++;
                continue;
            }
            nums[off+1]=nums[cm];
            off++;
            uniq++;
            cm++;
        }
        return uniq;
    }
};