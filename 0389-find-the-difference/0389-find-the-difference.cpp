class Solution {
public:
    char findTheDifference(string s, string t) {
        int n = s.size();
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        char ans;
        for(int i=0;i<n;i++){
            if(s[i] != t[i]){
                ans = t[i];
                break;
            }
        }
        return ans;
    }
};