class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        reverse(s.begin(),s.end());
        for(int i=0;n>i;i++){
            cout<<s[i];
        }

        
    }
};