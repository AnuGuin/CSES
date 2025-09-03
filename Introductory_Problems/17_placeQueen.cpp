#include <bits/stdc++.h>
using namespace std;

long long answer = 0;

bool isSafe(int row, int col, vector<string>& board) {
    // same column (above)
    int r = row - 1;
    while (r >= 0) {
        if (board[r][col] == 'Q') return false;
        r--;
    }

    // upper-left diagonal
    r = row - 1;
    int c = col - 1;
    while (r >= 0 && c >= 0) {
        if (board[r][c] == 'Q') return false;
        r--; c--;
    }

    // upper-right diagonal
    r = row - 1;
    c = col + 1;
    while (r >= 0 && c < 8) {
        if (board[r][c] == 'Q') return false;
        r--; c++;
    }

    return true;
}



void placeQueen(int row, vector<string>& board) {
    if (row == 8) { answer++; return; }
    for (int col = 0; col < 8; ++col) {
        if (board[row][col] != '*' && isSafe(row, col, board)) {
            board[row][col] = 'Q';
            placeQueen(row + 1, board);
            board[row][col] = '.'; // backtrack
        }
    }
}

int main() {
    vector<string> grid(8);
    for (int i = 0; i < 8; ++i) cin >> grid[i];
    placeQueen(0, grid);
    cout << answer << '\n';
}
