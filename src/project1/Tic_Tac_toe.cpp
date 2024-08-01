#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <fstream>
#include <vector>
#include <exception>


using namespace std;

const int ROWS = 3;
const int COLS = 3;
const char EMPTY = ' ';
const char PLAYER_X = 'X';
const char PLAYER_O = 'O';

enum class GameStatus { PLAYING, PLAYER_X_WIN, PLAYER_O_WIN, DRAW };

struct Cell {
    char value;
    bool isOccupied() const { return value != EMPTY; }
};

class TicTacToe {
public:
    TicTacToe() : board(ROWS, vector<Cell>(COLS, {EMPTY})), currentPlayer(PLAYER_X) {}

    void startGame() {
        cout << "Welcome to Tic Tac Toe!" << endl;
        while (true) {
            printBoard();
            if (makeMove()) {
                break;
            }
            switchTurn();
        }
        printBoard();
        declareWinner();
    }

private:
    vector<vector<Cell>> board;
    char currentPlayer;

    bool makeMove() {
        int row, col;
        if (currentPlayer == PLAYER_O) {
            getComputerMove(row, col);
        } else {
            getPlayerMove(row, col);
        }

        if (!isValidMove(row, col)) {
            cout << "Invalid move. Please try again." << endl;
            return false;
        }

        board[row][col].value = currentPlayer;
        return isGameOver();
    }

    void switchTurn() {
        currentPlayer = (currentPlayer == PLAYER_X) ? PLAYER_O : PLAYER_X;
    }

    bool isValidMove(int row, int col) const {
        return row >= 0 && row < ROWS && col >= 0 && col < COLS && board[row][col].value == EMPTY;
    }

    bool isGameOver() const {
        // Check rows and columns
        for (int i = 0; i < ROWS; ++i) {
            if (board[i][0].value == currentPlayer &&
                board[i][1].value == currentPlayer &&
                board[i][2].value == currentPlayer) {
                return true;
            }
            if (board[0][i].value == currentPlayer &&
                board[1][i].value == currentPlayer &&
                board[2][i].value == currentPlayer) {
                return true;
            }
        }

        // Check diagonals
        if (board[0][0].value == currentPlayer &&
            board[1][1].value == currentPlayer &&
            board[2][2].value == currentPlayer) {
            return true;
        }
        if (board[0][2].value == currentPlayer &&
            board[1][1].value == currentPlayer &&
            board[2][0].value == currentPlayer) {
            return true;
        }

        // Check for draw
        for (int i = 0; i < ROWS; ++i) {
            for (int j = 0; j < COLS; ++j) {
                if (board[i][j].value == EMPTY) {
                    return false;
                }
            }
        }
        return true;
    }

    void printBoard() const {
        for (int i = 0; i < ROWS; ++i) {
            for (int j = 0; j < COLS; ++j) {
                cout << board[i][j].value;
                if (j < COLS - 1) {
                    cout << '|';
                }
            }
            cout << endl;
        }
    }

    void declareWinner() const {
        GameStatus status = getGameStatus();
        switch (status) {
            case GameStatus::PLAYER_X_WIN:
                cout << "Player X wins!" << endl;
                break;
            case GameStatus::PLAYER_O_WIN:
                cout << "Player O wins!" << endl;
                break;
            case GameStatus::DRAW:
                cout << "It's a draw!" << endl;
                break;
            default:
                break;
        }
    }

