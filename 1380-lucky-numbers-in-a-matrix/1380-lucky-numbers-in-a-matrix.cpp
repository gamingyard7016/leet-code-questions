class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {

        int rows = matrix.size();
        int cols = matrix[0].size();

        vector<int> rowMin(rows);
        vector<int> colMax(cols);

        // Har row ka minimum find karo
        for(int i = 0; i < rows; i++) {

            rowMin[i] = matrix[i][0];

            for(int j = 0; j < cols; j++) {

                if(matrix[i][j] < rowMin[i]) {
                    rowMin[i] = matrix[i][j];
                }
            }
        }

        // Har column ka maximum find karo
        for(int j = 0; j < cols; j++) {

            colMax[j] = matrix[0][j];

            for(int i = 0; i < rows; i++) {

                if(matrix[i][j] > colMax[j]) {
                    colMax[j] = matrix[i][j];
                }
            }
        }

        // Lucky numbers find karo
        vector<int> ans;

        for(int i = 0; i < rows; i++) {

            for(int j = 0; j < cols; j++) {

                if(matrix[i][j] == rowMin[i] &&
                   matrix[i][j] == colMax[j]) {

                    ans.push_back(matrix[i][j]);
                }
            }
        }

        return ans;
    }
};