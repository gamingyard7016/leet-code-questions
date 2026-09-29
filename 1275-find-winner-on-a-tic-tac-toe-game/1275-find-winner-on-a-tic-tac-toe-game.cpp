class Solution {
public:
    bool win(char board[3][3], char player) {
        for (int i = 0; i < 3; i++) {
            if (board[i][0] == player && board[i][1] == player &&
                board[i][2] == player)
                return true;
            if (board[0][i] == player && board[1][i] == player &&
                board[2][i] == player)
                return true;
        }
        if (board[0][0] == player && board[1][1] == player &&
            board[2][2] == player)
            return true;

        if (board[0][2] == player && board[1][1] == player &&
            board[2][0] == player)
            return true;
        return false;
    }
    string tictactoe(vector<vector<int>>& moves) {
        char board[3][3];

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                board[i][j] = ' '; // khali 3X3 ka board banao
            }
        }

        for (int i = 0; i < moves.size(); i++) {

            if (i % 2 == 0)
                board[moves[i][0]][moves[i][1]] = 'x';
                //   [      0    ][      0    ]  i=0 X
                //   [      2    ][      0    ]  i=1 
                //   [      1    ][      1    ]  i=2 X
                //   [      2    ][      1    ]  i=3 
                //   [      2    ][      2    ]  i=4 X
            else
                board[moves[i][0]][moves[i][1]] = '0';
        }



        if (win(board, 'x'))
            return "A";
        if (win(board, '0'))
            return "B";
        if (moves.size() == 9)
            return "Draw";
        else
            return "Pending";
    }
};

//          MOVES
//             ↓
//     Board mein moves daalo
//             ↓
//    A = X , B = O
//             ↓
//     A winner check karo
//       ↙           ↘
//    YES             NO
//     ↓               ↓
//    "A"        B winner check
//                      ↙
//                    YES
//                     ↓
//                    "B"
//                     ↓
//                    NO
//                     ↓
//              Board full hai?
//               ↙          ↘
//             YES          NO
//              ↓            ↓
//           "Draw"       "Pending"