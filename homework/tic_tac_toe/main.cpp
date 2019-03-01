#include "tic_tac_toe.h"
#include <iostream>
#include <string>

int main() 
{
	std::string first;
	char choice;
	int position;
	TicTacToe tic_tac_toe;
	do 
	{
		std::cout << "first player";
		std::cin >> first;
		tic_tac_toe.start_game(first);

		
		while (tic_tac_toe.game_over() == false)
		{
			std::cout << "Enter position";
			std::cin >> position;
			tic_tac_toe.mark_board(position);

		 }

		std::cout << "play again";
		std::cin >> choice;

	} (while choice == "y");
	/*
	TicTacToe TicTacToe();
	TicTacToe.start_game(std::string first_player);
	
	std::cout << "Player one: choose X or O";
	std::cin >> first_player;

	TicTacToe.display_board();*/
	

	return 0;
}