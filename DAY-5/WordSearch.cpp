#include <bits/stdc++.h>
#include <vector>

using namespace std;
        //Typical Backtracking Problem----
class Solution {
public:
    int m, n;
    vector<vector<int>> directions{{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    
    bool find(vector<vector<char>>& board, int i, int j, int index, string& word) {
        // True condition: all characters matched
        if (index == word.length()) return true;

        // False conditions: out of bounds or character mismatch or already visited
        if (i < 0 || j < 0 || i >= m || j >= n || board[i][j] != word[index] || board[i][j] == '$') return false;
        
        // Mark the current cell as visited
        char temp = board[i][j];
        board[i][j] = '$';

        // Explore all possible directions
        for (auto& dir : directions) {
            int new_i = i + dir[0];
            int new_j = j + dir[1];
            

            if (find(board, new_i, new_j, index + 1, word)) {
                return true;
            }
        }

        // Unmark the current cell (restore original character)
        board[i][j] = temp;
        return false;
    }

    bool exist(vector<vector<char>>& board, string word) {
        m = board.size();
        n = board[0].size();
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i][j] == word[0] && find(board, i, j, 0, word)) {
                    return true;
                }
            }
        }
        return false;
    }
};
