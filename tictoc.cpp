#include <iostream>
using namespace std;

char board[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};

void draw_board() {
    cout << "-------------" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "| ";
        for (int j = 0; j < 3; j++) {
            cout << board[i][j] << " | ";
        }
        cout << endl;
        cout << "-------------" << endl;
    }
}

bool is_board_full() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                return false;
            }
        }
    }
    return true;
}

bool check_for_win(char player) {
    // Check rows
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
            return true;
        }
    }
    // Check columns
    for (int j = 0; j < 3; j++) {
        if (board[0][j] == player && board[1][j] == player && board[2][j] == player) {
            return true;
        }
    }
    // Check diagonals
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) {
        return true;
    }
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) {
        return true;
    }
    return false;
}

void player_move(char player) {
    int row, col;
    cout << "Player " << player << ", enter your move (row, column): ";
    cin >> row >> col;
    while (row < 1 || row > 3 || col < 1 || col > 3 || board[row-1][col-1] != ' ') {
        cout << "Invalid move. Player " << player << ", enter your move (row, column): ";
        cin >> row >> col;
    }
    board[row-1][col-1] = player;
}

int main() {
    char player = 'X';
    bool game_over = false;
    draw_board();
    while (!game_over) {
        player_move(player);
        draw_board();
        if (check_for_win(player)) {
            cout << "Player " << player << " wins!" << endl;
            game_over = true;
        } else if (is_board_full()) {
            cout << "It's a tie!" << endl;
            game_over = true;
        } else {
            player = (player == 'X') ? 'O' : 'X';
        }
    }
    return 0;
}

