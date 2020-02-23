#include <vector>
#include <set>

using namespace std;

class ValidSudoku {
public:
    bool isRowValid(vector<char>& row){
        set<char> uniques;

        for (auto ch : row){
            if (ch != '.'){
                // Also possible if(auto ret = uniques.insert(ch); !ret.second){
                auto ret = uniques.insert(ch);
                if(!ret.second){
                    return false;
                }
            }
        }
        return true;
    }

    void getColumn(vector<vector<char>>& board, vector<char>& col, int index){
        for (unsigned int i = 0; i < board.size(); i++){
            col.push_back(board[i][index]);
        }
    }

    void getGrid(vector<vector<char>>& board, vector<char>& grid, pair<int, int> cor){
        grid.insert(grid.end(),board[cor.first*3].begin()+(cor.second*3), board[cor.first*3].begin()+(cor.second*3)+3);
        grid.insert(grid.end(),board[cor.first*3 + 1].begin()+(cor.second*3), board[cor.first*3 + 1].begin()+(cor.second*3)+3);
        grid.insert(grid.end(),board[cor.first*3 + 2].begin()+(cor.second*3), board[cor.first*3 + 2].begin()+(cor.second*3)+3);
    }

    bool isValidSudoku(vector<vector<char>>& board) {

        for (unsigned int i = 0; i < board.size(); i++){
            vector<char> col, grid;
            getColumn(board, col, i);
            getGrid(board, grid, pair<int, int> {i/3, i%3});

            if (!isRowValid(board[i]) || !isRowValid(col) || !isRowValid(grid)){
                return false;
            }
        }
        return true;
    }
};