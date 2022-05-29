#include <iostream>
#include <stdlib.h>
#include<process.h>
using namespace std;

class TicTacToe
{
    char board[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
    char winner;
    int input;

public:
    char win();
    void DisplayBoard();
    void Input(int p);
    void updateBoard(int x,char y);

}; //class ends here
//Display function
void TicTacToe::DisplayBoard()
{
    cout << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << endl;
    cout << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << endl;
    cout << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << endl;
    winner=win();
    if(winner=='X'){
        cout<<"\nPlayer X won.";
        exit(0);
    }
    if (winner=='O')
    {
        cout<<"\nPlayer O won.";

        exit(0);
    }
    
}
//input function
void TicTacToe::Input(int p)
{   const char p1='X',p2='O';
    if (p == 1 || p == 3 || p == 5 || p == 7 || p == 9)
    {   cout<<"Player 1 turn "<<endl;
        cout << "Enetr the index :";
        cin >> input;
        updateBoard(input,p1);
    }
    if(p == 2 || p == 4 || p == 6 || p == 8)
    {   cout<<"Player 2 turn "<<endl;
        cout << "Enetr the index :";
        cin >> input;
        updateBoard(input,p2);
    }
}
//update board function
void TicTacToe::updateBoard(int x, char y)
{   int row,col;
    if (y=='X')
    {       switch (x)
        {
        case 1:
            board[0][0] = 'X';
            break;
        case 2:
            board[0][1] = 'X';
            break;
        case 3:
            board[0][2] = 'X';
            break;
        case 4:
            board[1][0] = 'X';
            break;
        case 5:
            board[1][1] = 'X';
            break;
        case 6:
            board[1][2] = 'X';
            break;
        case 7:
            board[2][0] = 'X';
            break;
        case 8:
            board[2][1] = 'X';
            break;
        case 9:
            board[2][2] = 'X';
            break;
        default:
            cout << "\n Wrong index";
            break;
        }
    }
    if (y=='O')
    {
           switch (x)
        {
        case 1:
            board[0][0] = 'O';
            break;
        case 2:
            board[0][1] = 'O';
            break;
        case 3:
            board[0][2] = 'O';
            break;
        case 4:
            board[1][0] = 'O';
            break;
        case 5:
            board[1][1] = 'O';
            break;
        case 6:
            board[1][2] = 'O';
            break;
        case 7:
            board[2][0] = 'O';
            break;
        case 8:
            board[2][1] = 'O';
            break;
        case 9:
            board[2][2] = 'O';
            break;
        default:
            cout << "\n Wrong index";
            break;
        }
    }
    system("CLS");
    DisplayBoard();
}
//win function
char TicTacToe::win()
{	//first player

	if (board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X')
		return 'X';
	if (board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X')
		return 'X';
	if (board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X')
		return 'X';

	if (board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X')
		return 'X';
	if (board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X')
		return 'X';
	if (board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X')
		return 'X';

	if (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X')
		return 'X';
	if (board[2][0] == 'X' && board[1][1] == 'X' && board[0][2] == 'X')
		return 'X';

	//second player
	if (board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O')
		return 'O';
	if (board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O')
		return 'O';
	if (board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O')
		return 'O';

	if (board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O')
		return 'O';
	if (board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O')
		return 'O';
	if (board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O')
		return 'O';

	if (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O')
		return 'O';
	if (board[2][0] == 'O' && board[1][1] == 'O' && board[0][2] == 'O')
		return 'O';
}
int main()
{
    TicTacToe obj;
    obj.DisplayBoard();
    for (int i = 1; i <= 9; i++)
    {
        obj.Input(i);
    }

    return 0;
}