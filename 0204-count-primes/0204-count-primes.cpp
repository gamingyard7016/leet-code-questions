class Solution {
public:
    bool isprime(int n) {
        // if(n = 5000000) return false;
        // if(n<2) return false;
        if(n == 2) return true;
        if( n == 1 || n%2 == 0 || n == 0) return false;
        for (int i = 3; i <= sqrt(n); i+=2) {
            if (n % i == 0)
                return false;
        }
        return true;
    }
    int countPrimes(int n) {

        int count = 0;
        for (int i = 2; i < n; i++) {
            if (isprime(i) )
                count++;
        }
        return count;
    }
};