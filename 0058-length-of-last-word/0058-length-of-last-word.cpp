#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int right = s.length() - 1;
        int left = 0;

        // Ek single main loop
        while (right >= 0) {
            // Step 1: Peeche ke faltu spaces skip karo
            while (right >= 0 && s[right] == ' ') {
                right--;
            }

            // Step 2: Left ko right pe rakho aur pure word ko cover karo
            left = right;
            while (left >= 0 && s[left] != ' ') {
                left--;
            }

            // Word milte hi aage check karne ki zaroorat nahi
            break;
        }

        return right - left;
    }
};