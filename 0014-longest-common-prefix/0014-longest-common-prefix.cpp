class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string ans;
        for(int i =0;i<min(strs[0].length(),strs[strs.size()-1].length());i++){
            if(strs[0][i] == strs[strs.size()-1][i]){
                ans += strs[0][i];
            }
            else return ans;
        }
        return ans;

    }
};