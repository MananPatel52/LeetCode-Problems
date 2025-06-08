class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int rowCase[9][9] = {0};
        int colCase[9][9] = {0};
        int gridCase[9][9] = {0};

        for(int i = 0; i<board.size(); i++){
            for(int j = 0; j<board[0].size(); j++){
                if(board[i][j] != '.'){
                    int number = board[i][j] - '0';

                    int k = i/3*3+j/3;

    if(rowCase[i][number-1]++ || colCase[j][number-1]++ || gridCase[k][number-1]++)
                    return false;
                    
                }
            }
        }
        return true;
    }
};