#include "tic_tac_toe_manager.h"
#include <iostream>
#include <string>

int main() 
{ 
	std::string first;
	char choice;
	int position;
	TicTacToeManager manager;

	do 
	{
		TicTacToe tic_tac_toe;
		std::cout << "first player";
		std::cin >> first;
		tic_tac_toe.start_game(first);

		
		while (tic_tac_toe.game_over() == false)
		{
			TicTacToe >> position;
			//std::cout << "Enter position";
			//std::cin >> position;
			tic_tac_toe.mark_board(position);
			tic_tac_toe.display_board();
		 }

		manager.save_game(tic_tac_toe);
		std::cout << "play again";
		std::cin >> choice;

	} while (choice == 'y');

	manager.display_history();
	return 0;
}