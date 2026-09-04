class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int start = 0; // outer pointer: tracks beginning of each word

        for (int i = 0; i <= n; i++) {
            // condition: we hit a space OR we reached the end of string
            if (i == n || s[i] == ' ') {
                
                // end of current word (one position before space, 
                // or the last index if string just ended)
                int end = i - 1;

                // inner two pointers to reverse just this one word
                int left = start;
                int right = end;

                while (left < right) {
                    swap(s[left], s[right]);
                    left++;
                    right--;
                }

                // move start to the beginning of the NEXT word
                start = i + 1;
            }
        }

        return s;
    }
};