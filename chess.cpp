#include <iostream>
#include <stdio.h>

using namespace std;


string chess_board[81] = {"8", "♖", "♘", "♗", "♕", "♔", "♗", "♘", "♖",
													"7", "♙", "♙", "♙", "♙", "♙", "♙", "♙", "♙", 
													"6", ".", ".", ".", ".", ".", ".", ".", ".",
 												  "5", ".", ".", ".", ".", ".", ".", ".", ".",
 												  "4", ".", ".", ".", ".", ".", ".", ".", ".",
 												  "3", ".", ".", ".", ".", ".", ".", ".", ".",
												  "2", "♙", "♙", "♙", "♙", "♙", "♙", "♙", "♙",
												  "1", "♖", "♘", "♗", "♕", "♔", "♗", "♘", "♖",
												  " ", "a", "b", "c", "d", "e", "f", "g", "h"};


void logic(){
	int turn=0;
	string moves_player1[2], moves_player2[2];
	cout << "Player 1\n";
	cout << "Choose a piece "; cin >> moves_player1[0];
	cout << "\nChoose a pace "; cin >> moves_player1[1];
	turn = 1;
	cout << "Player 2\n";
	cout << "Choose a piece "; cin >> moves_player1[0];
	cout << "\nChoose a pace "; cin >> moves_player1[1];
}


void board(){
	int i, line_jump=8;
	cout << "";
	for(i=0; i<81; i++){
		cout << chess_board[i] << " ";
		if(i == line_jump){
 			cout << "\n";
			line_jump += 9;
		}
	}
		logic();
}


int main(){
	board();
	return 0;
}
