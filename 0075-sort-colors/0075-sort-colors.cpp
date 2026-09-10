class Solution {
public:
    void sortColors(vector<int>& nums) {
       int n= nums.size();
        // sort(nums.begin(),nums.end());
        int left = 0;
        //int right = n-1;
        while(left<n){
            // int right = left+1;
            for(int right = left+1;right<n;right++){
                if(nums[left]>nums[right]) {
                    swap(nums[left], nums[right]);           
                }   
            }
            left++;
        }
    }
};