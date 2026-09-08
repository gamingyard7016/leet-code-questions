class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        
        int left = 0;           // Pointer at start
        int right = n - 1;      // Pointer at end
        
        // Fill result array from the last position to the first
        for (int i = n - 1; i >= 0; i--) {
            int leftSquare = nums[left] * nums[left];
            int rightSquare = nums[right] * nums[right];
            
            // Compare which square is larger and place it at the end
            if (leftSquare > rightSquare) {
                result[i] = leftSquare;
                left++; // Move left pointer forward
            } else {
                result[i] = rightSquare;
                right--; // Move right pointer backward
            }
        }
        
        return result;
    }
};