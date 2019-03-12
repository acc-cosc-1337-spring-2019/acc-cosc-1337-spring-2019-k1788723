#include "tic_tac_toe_manager.h"
//Write class function implementations here

void TicTacToeManager::save_game(const TicTacToe game)
{
	update_winner_count(game.get_winner());
	games.push_back(game);
}
 
void TicTacToeManager::display_history() const
{
	for (auto game : games)
	{
		game.display_board();
	}
}

void TicTacToeManager::update_winner_count(std::string winner)
{
	if (winner == "X")
	{
		x_win ++;
	}
	else if (winner == "O")
	{
		o_win ++;
	}
	else if (winner == "C")
	{
		ties ++;
	}

}
