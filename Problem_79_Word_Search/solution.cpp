#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        if (board.empty() || board[0].empty() || word.empty()) {
            return false;
        }

        int rows = static_cast<int>(board.size());
        int cols = static_cast<int>(board[0].size());
        vector<vector<bool>> visited(rows, vector<bool>(cols, false));

        for (int r = 0; r < rows; ++r) {
            for (int c = 0; c < cols; ++c) {
                if (board[r][c] == word[0] && dfs(board, word, visited, r, c, 0)) {
                    return true;
                }
            }
        }

        return false;
    }

private:
    bool dfs(vector<vector<char>>& board, const string& word, vector<vector<bool>>& visited, int r, int c, int index) {
        if (index == static_cast<int>(word.size())) {
            return true;
        }
        if (r < 0 || r >= static_cast<int>(board.size()) || c < 0 || c >= static_cast<int>(board[0].size())) {
            return false;
        }
        if (visited[r][c] || board[r][c] != word[index]) {
            return false;
        }

        visited[r][c] = true;
        int directions[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
        for (auto& dir : directions) {
            if (dfs(board, word, visited, r + dir[0], c + dir[1], index + 1)) {
                return true;
            }
        }
        visited[r][c] = false;
        return false;
    }
};
