#include "tic_tac_toe_manager.h"
//Write class function implementations here

void TicTacToeManager::save_game(const TicTacToe b)
{
	games.push_back(TicTacToe);
	update_winner_count(winner);
}
 
void TicTacToeManager::display_history() const
{
	TicTacToe.get_winner();
}

void TicTacToeManager::update_winner_count(std::string winner)
{
	x_win = 0;
	o_win = 0;
	ties = 0;

	if (winner == "X")
	{
		x_win += 1;
	}
	else if (winner == "O")
	{
		o_win += 1;
	}
	else
	{
		ties += 1;
	}

}
