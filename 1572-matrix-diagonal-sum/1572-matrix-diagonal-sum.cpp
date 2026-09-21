class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int ans =0;
        for(int i=0;i<mat.size();i++){
            if(i == (mat[0].size()-1)-i ? ans+= mat[i][(mat[0].size()-1)-i] : ans += mat[i][i] + mat[i][(mat[0].size()-1)-i]);
        }
        return ans;
    }
};