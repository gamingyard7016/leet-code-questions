class Solution {
public:
    int arrangeCoins(int n) {
        long long x=0,ans=0;
        for(int i=0;i<n;i++){
            x =x+i;
            if(x > n){
                break;
            } 
            ans++;
        }
        if (n == 1) return ans;
        return ans-1;
        
    }
};