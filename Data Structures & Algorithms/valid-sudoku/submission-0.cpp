class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<char,int>help_vect_hor,help_vect_hor2,help_vect_hor3;
            ///horizontal and vertical check
            for (int i=0 ; i<9;i++){
                for(int j=0 ; j<9 ; j++){
                    if(board[i][j]!='.'){
                        if(help_vect_hor[board[i][j]]==1) return false;
                        help_vect_hor[board[i][j]]++;
                    }
                    if(board[j][i]!='.'){
                        if(help_vect_hor2[board[j][i]]==1) return false;
                        help_vect_hor2[board[j][i]]++;
                    }
                }
                help_vect_hor.clear();
                help_vect_hor2.clear();
            }
            /// 3x3 box check - will use one of the maps above
            for (int i=0 ; i<9;i++){
                for(int j=0 ; j<3 ;j++){
                if(board[i][j]!='.'){
                        if(help_vect_hor[board[i][j]]==1) return false;
                        help_vect_hor[board[i][j]]++;
                    }
            }
            for(int j=3 ; j<6 ;j++){
                if(board[i][j]!='.'){
                        if(help_vect_hor2[board[i][j]]==1) return false;
                        help_vect_hor2[board[i][j]]++;
                    }
            }
            for(int j=6 ; j<9 ;j++){
                if(board[i][j]!='.'){
                        if(help_vect_hor3[board[i][j]]==1) return false;
                        help_vect_hor3[board[i][j]]++;
                    }
            }
            if(i%3==2){
                    help_vect_hor.clear();
                    help_vect_hor2.clear();
                    help_vect_hor3.clear();
                }
            }
            return true;
    }
};