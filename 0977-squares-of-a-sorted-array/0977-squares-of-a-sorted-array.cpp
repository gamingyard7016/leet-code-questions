class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size(); // Use the full size
        vector<int> k(n);    // Initialize vector with size n
        for(int i = 0; i < n; i++) {
            k[i] = nums[i] * nums[i]; // Square the value, not the index
        }
        sort(k.begin(), k.end());
        return k;
    }
};