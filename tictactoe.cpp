//********************************************************************************
//
//	Author:           Shairam (Sai) Narendran
//	Date Created:     5/3/15
//	Revisions:        None.
//
//	Purpose:          Effectively use ADTs and classes to create a Tic Tac Toe 
//
//	Input:            Numbers 1-9 corresponding to space on board 
//                   
//	Output:           Output 'X' or 'O' based on the player's turn.
//                    Output winner or if it is a draw 
//
//********************************************************************************


#include <iostream>
#include "tictactoe.h"
using namespace std;

ticTacToe::ticTacToe(){
   for(int i = 0; i < 10; ++i){
       square[i] = 48 + i;
   }  
}

int ticTacToe::gameStatus(){
   if (square[1] == square[2] && square[2] == square[3])

       return 1;
   else if (square[4] == square[5] && square[5] == square[6])

       return 1;
   else if (square[7] == square[8] && square[8] == square[9])

       return 1;
   else if (square[1] == square[4] && square[4] == square[7])

       return 1;
   else if (square[2] == square[5] && square[5] == square[8])

       return 1;
   else if (square[3] == square[6] && square[6] == square[9])

       return 1;
   else if (square[1] == square[5] && square[5] == square[9])

       return 1;
   else if (square[3] == square[5] && square[5] == square[7])

       return 1;
   else if (square[1] != '1' && square[2] != '2' && square[3] != '3'
&& square[4] != '4' && square[5] != '5' && square[6] != '6'
&& square[7] != '7' && square[8] != '8' && square[9] != '9')

       return 0;
   else
       return -1;
}

void ticTacToe::displayBoard(){
   cout << "\n\n\tTic Tac Toe\n\n";

   cout << "Player 1 (X) - Player 2 (O)" << endl << endl;

   cout << "     |     |     " << endl;
   cout << "  " << square[1]  << "  |  " << square[2]  << "  |  " << square[3] << endl;

   cout << "_____|_____|_____" << endl;
   cout << "     |     |     " << endl;

   cout << "  " << square[4] << "  |  " << square[5]  << "  |  " << square[6] << endl;

   cout << "_____|_____|_____" << endl;
   cout << "     |     |     " << endl;

   cout << "  " << square[7]  << "  |  " << square[8]  << "  |  " << square[9] << endl;

   cout << "     |     |     " << endl;
}

char ticTacToe::isMoveValid(int player, char mark, int choice){
		
	do {
		if (choice == 1 && square[1] == '1')

           square[1] = mark;
       else if (choice == 2 && square[2] == '2')

           square[2] = mark;
       else if (choice == 3 && square[3] == '3')

           square[3] = mark;
       else if (choice == 4 && square[4] == '4')

           square[4] = mark;
       else if (choice == 5 && square[5] == '5')

           square[5] = mark;
       else if (choice == 6 && square[6] == '6')

           square[6] = mark;
       else if (choice == 7 && square[7] == '7')

           square[7] = mark;
       else if (choice == 8 && square[8] == '8')

           square[8] = mark;
       else if (choice == 9 && square[9] == '9')

           square[9] = mark;
       else
       {
		
           cout<<"Invalid move " << endl;
		   cout<<"Please Enter a New Space from 1-9"<< endl;
		   cin >> choice; 
		   if (choice == 1 && square[1] == '1')

           square[1] = mark;
		   else if (choice == 2 && square[2] == '2')

           square[2] = mark;
		   else if (choice == 3 && square[3] == '3')

           square[3] = mark;
           else if (choice == 4 && square[4] == '4')

           square[4] = mark;
           else if (choice == 5 && square[5] == '5')

           square[5] = mark;
           else if (choice == 6 && square[6] == '6')

           square[6] = mark;
           else if (choice == 7 && square[7] == '7')

           square[7] = mark;
           else if (choice == 8 && square[8] == '8')

           square[8] = mark;
           else if (choice == 9 && square[9] == '9')

           square[9] = mark;
       }
	} while(choice > 10 || choice < 1);
	   return mark;
}

void ticTacToe::getXOMove(){
	int player = 1, i, choice;

    char mark;

	do
    {
    displayBoard();
	player = (player%2) ? 1 : 2;

    cout << "Player " << player << ", enter a number: ";
    cin >> choice;

    mark = (player == 1) ? 'X' : 'O';
	int p = player;
	char m = mark;
	int c = choice; 
	mark = isMoveValid(p, m, c);

   
	i = gameStatus();

    player++;
   }while(i==-1);
   displayBoard();
   if(i==1)

       cout<<"Player "<<--player<<" wins! ";
   else
       cout<<"The Game is a draw";

   cin.ignore();
   cin.get();
}

void ticTacToe::play(){
	getXOMove();
}
