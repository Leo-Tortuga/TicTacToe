#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;
void checkWinner(char board[3][3]) {
//Check For X 
    if (board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X') {//Top Row 
        cout << "Player 1 Wins!" << endl; 
        exit(1);
    }
    else if (board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X') { //Mid Row
        cout << "Player 1 Wins!" << endl; 
        exit(1);
    }
    else if (board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X') { //Bottom Row
        cout << "Player 1 Wins!" << endl; 
        exit(1);
    }
    else if (board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X')  {//Left Col
        cout << "Player 1 Wins!" << endl; 
        exit(1);
    } 
    else if (board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X') {//Mid Col
        cout << "Player 1 Wins!" << endl;  
        exit(1);
    }
    else if (board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X') { //Right Col
        cout << "Player 1 Wins!" << endl; 
        exit(1);
    }
    else if (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X') {//Top Left --> Bottom Right
        cout << "Player 1 Wins!" << endl; 
        exit(1);
    }
    else if (board[2][0] == 'X' && board[1][1] == 'X' && board[0][2] == 'X') { //Bottom Left --> Top Right
        cout << "Player 1 Wins!" << endl; 
        exit(1);
    }

//Check For O
    if (board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O') {//Top Row 
        cout << "Player 1 Wins!" << endl; 
        exit(1);
    }
    else if (board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O') { //Mid Row
        cout << "Player 1 Wins!" << endl; 
        exit(1);
    }
    else if (board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O') { //Bottom Row
        cout << "Player 1 Wins!" << endl; 
        exit(1);
    }
    else if (board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O')  {//Left Col
        cout << "Player 1 Wins!" << endl; 
        exit(1);
    } 
    else if (board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O') {//Mid Col
        cout << "Player 1 Wins!" << endl;  
        exit(1);
    }
    else if (board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O') { //Right Col
        cout << "Player 1 Wins!" << endl; 
        exit(1);
    }
    else if (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O') {//Top Left --> Bottom Right
        cout << "Player 1 Wins!" << endl; 
        exit(1);
    }
    else if (board[2][0] == 'O' && board[1][1] == 'O' && board[0][2] == 'O') { //Bottom Left --> Top Right
        cout << "Player 1 Wins!" << endl; 
        exit(1);
    }


} 

void play(char player, char board[3][3]) {
    char move;
    cout << "Choose a Number: \t";
    cin >> move;

    switch(move) {
        case '1':
            board[0][0] = player;
            break;
        case '2':
            board[0][1] = player;
            break;
        case '3':
            board[0][2] = player;
            break;
        case '4':
            board[1][0] = player;
            break;
        case '5':
            board[1][1] = player;
            break;
        case '6':
            board[1][2] = player;
            break;
        case '7':
            board[2][0] = player;
            break;
        case '8':
            board[2][1] = player;
            break;
        case '9':
            board[2][2] = player;
            break;
        default:
            cout << "Try Again\n";
            play(player, board);
            break;
    }
    for (int i =0; i < 3; i++) {
         for(int j = 0; j < 3; j++) {
            cout << board[i][j] << " ";
         }
        cout << endl;
     }
    
    checkWinner(board); 

    if(player == 'X') {
        player = 'O';
        play(player, board);
    } else if (player == 'O'){
        player = 'X';
        play(player, board);
    }
    
}


void display() {
    srand(time(NULL));
    int player_num = rand() % 2;
    string prompt = player_num == 0 ? "Player 1 is first" : "Player 2 is first";
    char first = player_num == 0 ? 'X' : 'O';
    char chart[3][3] = {
        {'1','2','3'},
        {'4','5','6'},
        {'7','8','9'},
        };
     for (int i =0; i < 3; i++) {
         for(int j = 0; j < 3; j++) {
            cout << chart[i][j] << " ";
         }

        cout << endl;
     } 
     play(first, chart);
}

int main() {
    display();
}