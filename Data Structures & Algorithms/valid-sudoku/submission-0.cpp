class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i =0;i<9;i++){
            bool seen[9] = {false};
            for(int j =0;j<9;j++){
               if (board[i][j]=='.') continue;
               int num = board[i][j]-'1';
               if(seen[num]){
                return false;
               }
               seen[num]=true;
            }
        }

        for(int j =0;j<9;j++){
            bool seen[9] = {false};
            for(int i =0;i<9;i++){
               if (board[i][j]=='.') continue;
               int num = board[i][j]-'1';
               if(seen[num]){
                return false;
               }
               seen[num]=true;
            }
        }

        for(int row =0; row<9;row+=3){
            for(int col =0;col<9;col+=3){
                bool seen[9]={false};
                for(int i =0;i<3;i++){
                    for(int j =0;j<3;j++){
                        char c = board[row+i][col+j];
                        if(c =='.') continue;
                        int num = c-'1';
                        if(seen[num]){
                            return false;
                        }
                        seen[num]=true;
                        
                    }
                }
            }
        }
        return true;
    }
};
