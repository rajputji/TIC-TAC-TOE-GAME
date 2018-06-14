/*

AUTHOR 
    Abhishek Rajput <Abhishekrajput676@gmail.com>

PROJECT
    A simple implementation of Tic-Tac-Toe game using C++.
*/

#include <iostream>
using namespace std;

void Drawboard(char board[])
{
	system("cls");
	cout << "\n\n\t\t\t************TIC-TAC-TOE************\n\n";
	cout << endl;
	cout << "\t\t\t\t     |     |     " << endl;
	cout << "\t\t\t\t  " << board[1] << "  |  " << board[2] << "  |  " << board[3] << endl;
	cout << "\t\t\t\t_____|_____|_____" << endl;
	cout << "\t\t\t\t     |     |     " << endl;
	cout << "\t\t\t\t  " << board[4] << "  |  " << board[5] << "  |  " << board[6] << endl;
	cout << "\t\t\t\t_____|_____|_____" << endl;
	cout << "\t\t\t\t     |     |     " << endl;
	cout << "\t\t\t\t  " << board[7] << "  |  " << board[8] << "  |  " << board[9] << endl;
	cout << "\t\t\t\t     |     |     " << endl << endl;
	cout << "\t\t\t\tPlayer A--> 'O' "<<endl;
	cout << "\t\t\t\tPlayer B--> 'X' "<<endl<<endl;
}
	
// returns 1->if win, 0->draw, -1-> game not over yet
int checkwin(char board[])
{
	if (board[1] == board[2] && board[2] == board[3])
		return 1;
	else if (board[4] == board[5] && board[5] == board[6])
		return 1;
	else if (board[7] == board[8] && board[8] == board[9])
		return 1;
	else if (board[1] == board[4] && board[4] == board[7])
		return 1;
	else if (board[2] == board[5] && board[5] == board[8])
		return 1;
	else if (board[3] == board[6] && board[6] == board[9])
		return 1;
	else if (board[1] == board[5] && board[5] == board[9])
		return 1;
	else if (board[3] == board[5] && board[5] == board[7])
		return 1;
	else if (board[1] != '1' && board[2] != '2' && board[3] != '3' && board[4] != '4' && board[5] != '5' && board[6] != '6' && board[7] != '7' && board[8] != '8' && board[9] != '9')
		return 0;
	else
		return -1;
}

int main()
{
	int player = 1,i=-1,choice;
	char board[10] = {'0','1','2','3','4','5','6','7','8','9'};
	char mark;
	do
	{
		Drawboard(board);
		cout << "\t\t\tPlayer " << char(player+'A'-1) << "'s Turn, Choose a number:  ";
		cin >> choice;
		mark=(player == 1) ? 'O' : 'X';
		if (choice == 1 && board[1] == '1')
			board[1] = mark;
		else if (choice == 2 && board[2] == '2')
			board[2] = mark;
		else if (choice == 3 && board[3] == '3')
			board[3] = mark;
		else if (choice == 4 && board[4] == '4')
			board[4] = mark;
		else if (choice == 5 && board[5] == '5')
			board[5] = mark;
		else if (choice == 6 && board[6] == '6')
			board[6] = mark;
		else if (choice == 7 && board[7] == '7')
			board[7] = mark;
		else if (choice == 8 && board[8] == '8')
			board[8] = mark;
		else if (choice == 9 && board[9] == '9')
			board[9] = mark;
		else
		{
			cout<<"\n\t\t\t\t\a Invalid move!";
			cin.get();
			continue;
		}
		i=checkwin(board);
		if(i==-1)
		{
			if(player==1)
				player=2;
			else
				player=1;
		}
	}while(i==-1);
	Drawboard(board);
	if(i==1)
		cout<<"\t\t\t\t Player "<<char(player+'A'-1)<<" has won!";
	else
		cout<<"\t\t\t\t It's a Draw!";
	return 0;
}
