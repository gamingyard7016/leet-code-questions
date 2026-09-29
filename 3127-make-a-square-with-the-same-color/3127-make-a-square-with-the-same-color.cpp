class Solution {
public:
    bool canMakeSquare(vector<vector<char>>& grid) {
        for(int i=0; i<2; i++){
            for(int j=0; j<2; j++){
                int black = 0;

                if(grid[i][j] == 'B') black++;
                if(grid[i][j+1] == 'B') black++;
                if(grid[i+1][j] == 'B') black++;
                if(grid[i+1][j+1] == 'B') black++;

                if(black != 2) return true;
            }
        }
        return false;
    } // ghiyugghj
};