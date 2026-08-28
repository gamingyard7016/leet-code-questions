class Solution {
public:
    int compress(vector<char>& s) {
        int n = s.size();
        int i = 0;
        int index = 0;

        while (i < n) {
            char ch = s[i];
            int count = 0;

            while (i < n && s[i] == ch) {
                count++;
                i++;
            }

            s[index++] = ch;

            if (count > 1) {
                string cnt = to_string(count);
                for (char c : cnt) {
                    s[index++] = c;
                }
            }
        }

        return index;
    }
};