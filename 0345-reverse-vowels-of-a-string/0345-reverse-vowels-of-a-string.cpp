class Solution {
public:
    bool isvovel(char&s){
        if(s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u' || s == 'A' || s == 'E' || s == 'I' || s == 'O' || s == 'U')return true;
        return false;
    }
    string reverseVowels(string s) {
        int n = s.size();
        int right = n-1;
        int left = 0;
        while(left<right){
            if(!isvovel(s[left])){
                left++;
            }
            else if(!isvovel(s[right])){
                right--;
            }
            else {
                swap(s[left],s[right]);
                left++;
                right--;
            }
        }
        return s;
    }
};
//'a','e','i','o','u','A','E','I','O','U'