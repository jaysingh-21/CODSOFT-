#include <iostream>
using namespace std;

char space[3][3];
char turn = 'X';

void blank() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            space[i][j] = ' ';
        }
    }
}

void model() {
    cout << "\n";
    cout << "     |     |     " << endl;
    cout << "  " << space[0][0] << "  |  " << space[0][1] << "  |  " << space[0][2] << "\n";
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << space[1][0] << "  |  " << space[1][1] << "  |  " << space[1][2] << "\n";
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << space[2][0] << "  |  " << space[2][1] << "  |  " << space[2][2] << "\n";
    cout << "     |     |     " << endl;
}

bool checkvictory() {
    for (int i = 0; i < 3; i++) {
        if ((space[i][0] == space[i][1] && space[i][0] == space[i][2] && space[i][0] != ' ') || 
            (space[0][i] == space[1][i] && space[0][i] == space[2][i] && space[0][i] != ' ')) {
            return true;
        }
    }
    if ((space[0][0] == space[1][1] && space[0][0] == space[2][2] && space[0][0] != ' ') ||
        (space[0][2] == space[1][1] && space[0][2] == space[2][0] && space[0][2] != ' ')) {
        return true;
    }
    return false;
}

bool checktie() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (space[i][j] == ' ') {
                return false;
            }
        }
    }
    return true;
}

void input() {
    int digit;
    int row = -1, column = -1;
    while (true) {
        if (turn == 'X') {
            cout << "Enter player X: ";
        } else {
            cout << "Enter player O: ";
        }
        cin >> digit;

        if (digit < 1 || digit > 9) {
            cout << "Invalid input. Please enter a number between 1 and 9." << endl;
            continue;
        }

        switch (digit) {
        case 1: 
            row = 0; 
            column = 0; 
            break;
        case 2: 
            row = 0; 
            column = 1; 
            break;
        case 3: 
            row = 0; 
            column = 2; 
            break;
        case 4: 
            row = 1; 
            column = 0; 
            break;
        case 5: 
            row = 1; 
            column = 1; 
            break;
        case 6: 
            row = 1;
            column = 2; 
            break;
        case 7:    
            row = 2; 
            column = 0; 
            break;
        case 8: 
            row = 2; 
            column = 1; 
            break;
        case 9: 
            row = 2; 
            column = 2; 
            break;
        default: cout << "Invalid input" << endl; return;
    }

        if (space[row][column] != 'X' && space[row][column] != 'O') {
            space[row][column] = turn;
            model();
            turn = (turn == 'X') ? 'O' : 'X';
            break;
        } else {
            cout << "Place is already filled. Try again." << endl;
        }
    }
}


int main() {
    int op;
    do {
        system("cls");
        cout << "\nWelcome to the TIC TAC TOE GAME" << endl;
        cout << "\nThe numbers represent the positions:\n" << endl;
        cout << "     |     |     " << endl;
        cout << "  1  |  2  |  3  \n";
        cout << "_____|_____|_____" << endl;
        cout << "     |     |     " << endl;
        cout << "  4  |  5  |  6  \n";
        cout << "_____|_____|_____" << endl;
        cout << "     |     |     " << endl;
        cout << "  7  |  8  |  9  \n";
        cout << "     |     |     " << endl;

        cout << "\nFirst player is player X" << endl;
        cout << "Second player is player O" << endl;
        turn='X';

        blank();
        model();

        while (true) {
            input();
            if (checkvictory()) {
                cout << "Player " << (turn == 'X' ? 'O' : 'X') << " wins!" << endl;
                break;
            }
            if (checktie()) {
                cout << "It's a tie!" << endl;
                break;
            }
        }

        cout << "\nDo you wish to play again?" << endl;
        cout << "1. Yes\n2. No" << endl;
        cout << "Enter : ";
        cin >> op;
    } while (op == 1);

    return 0;
}
