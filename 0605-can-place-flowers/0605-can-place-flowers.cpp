class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int t) {
        int n = flowerbed.size();
        
        // Edge case: single empty spot
        if(n == 1 && flowerbed[0] == 0) return t <= 1;
        if(n == 1 && flowerbed[0] == 1) return t <= 0;
        
        int zero = 0;
        int i = 0;
        
        while(i < n){
            // Check if current position is valid
            bool currentEmpty = (flowerbed[i] == 0);
            
            // Check left boundary
            bool leftEmpty = (i == 0 || flowerbed[i-1] == 0);
            
            // Check right boundary
            bool rightEmpty = (i == n-1 || flowerbed[i+1] == 0);
            
            if(currentEmpty && leftEmpty && rightEmpty){
                flowerbed[i] = 1;  // Mark as planted
                zero++;
                i += 2;  // Skip next index since we just planted
            } else {
                i++;
            }
        }
        
        return zero >= t;
    }
};