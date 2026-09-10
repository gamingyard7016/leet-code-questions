#include<cmath>
class Solution {
public:
    bool isPowerOfThree(int n) {
    if(n<1) return false;
    int maxpow =pow(3,19);
    if (maxpow % n == 0) return true;
    else return false;
    }
};