class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n =nums.size();
        int count = 0;
        for(int i=0; i<n;i++){
            int left = i;
            int right = i+1;
            while(right<n){
                if(nums[left] == nums[right]) count++;
                right++;
            }
        }
        return count;
    }
};