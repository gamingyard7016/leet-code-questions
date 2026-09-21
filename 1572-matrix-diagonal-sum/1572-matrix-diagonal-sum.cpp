class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size()-1;
        int ans =0;
        for(int i=0;i<m;i++){
            if(i == n-i) ans+= mat[i][n-i];
            else {
                ans += mat[i][i]; 
                ans += mat[i][n-i];
            }
            
        }
        return ans;
    }
};