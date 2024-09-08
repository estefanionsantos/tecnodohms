#include <iostream>
#include <vector>
#include <limits>
using namespace std;

void printBoard(const vector<vector<string>>& board)
{
    cout << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << board[i][j] << ' ';
        }
        cout << endl;
    }
    cout << endl;
}

bool checkWinner(const vector<vector<string>>& board, const string& player)
{
    vector<vector<string>> b = board;
    string p = player;

    for (int i = 1; i < 4; i++) {
        if (b[i][1] == p && b[i][2] == p && b[i][3] == p){ return true; }
        if (b[1][i] == p && b[2][i] == p && b[3][i] == p){ return true; }
    }

    if (b[1][1] == p && b[2][2] == p && b[3][3] == p){ return true; }
    if (b[1][3] == p && b[2][2] == p && b[3][1] == p){ return true; }

    return false;
}

bool isBoardFull(const vector<vector<string>>& board)
{
    for (int i = 1; i < 4; i++) {
        for (int j = 1; j < 4; j++) {
            if (board[i][j] == "-") {
                return false;
            }
        }
    }
    return true;
}

void clearInvalidInput() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int main()
{
    string currentPlayer = "X";
    string winner = "";
    bool gameWon = false;

    vector<vector<string>> board = {
        {" +", "1", "2", "3"},
        {" 1", "-", "-", "-"},
        {" 2", "-", "-", "-"},
        {" 3", "-", "-", "-"}
    };

    while (true) {
        printBoard(board);

        int x, y;
        cout << "PLAYER '" << currentPlayer << "', digite a linha e coluna (n n): ";
        cin >> x >> y;

        if ((cin.fail() || y < 1 || y > 3) && (cin.fail() || y < 1 || y > 3)) {
            cout << "Ops! Por favor, insira um número entre 1 e 3." << endl;
            clearInvalidInput();
            continue;
        }

        if (board[x][y] != "-") {
            cout << "Ops! Posição invalida. Tente novamente." << endl;
            continue;
        }

        board[x][y] = currentPlayer;

        if (checkWinner(board, currentPlayer)) {
            winner = currentPlayer;
            gameWon = true;
            break;
        }

        if (isBoardFull(board)) {
            break;
        }

        currentPlayer = (currentPlayer == "X") ? "O" : "X";
    }

    printBoard(board);

    if (gameWon) {
        cout << "PLAYER '" << winner << "' WINS! \\o/" << endl;
        return 0;
    }

    cout << "Empate! O tabuleiro está cheio." << endl;

    return 0;
}

