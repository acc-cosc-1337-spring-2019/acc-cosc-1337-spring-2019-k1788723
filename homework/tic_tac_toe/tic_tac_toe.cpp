#include "tic_tac_toe.h"
#include<iostream>

void TicTacToe::start_game(std::string first_player)
{
	next_player = first_player;
	clear_board();
}

std::string TicTacToe::get_player() const
{
	return next_player;
}

bool TicTacToe::game_over() 
{
	if (check_column_win() || check_row_win() || check_diagonal_win() || check_board_full())
	{
		return true;
	}
	return false;
}

void TicTacToe::mark_board(int position)
{
	pegs[position - 1] = next_player; 
	set_next_player();

	if (game_over() == false)
	{
		set_next_player();
	}
}

void TicTacToe::set_next_player()   
{
	if(next_player == "X")
	{
		next_player = "O";
	}
	else
	{
		next_player = "X";
	}
}
/*
 win by column if
 0,3,6 are equal
 1,4,7 
 2,5, 8
 else false
*/
bool TicTacToe::check_column_win()
{
	for (std::size_t i = 0; i < 3; ++i)
	{
		if (pegs[i] == pegs[i + 3] && pegs[i + 3] == pegs[i + 6] && pegs[i + 6] != " ")
		{
			return true;
		}
	}
	return false;
}

/*
win by row if 
0,1,2 are equal
3,4,5
6,7,8
*/
bool TicTacToe::check_row_win()
{
	for (std::size_t i = 0; i < 9; i += 3)
	{
		if (pegs[i] == pegs[i + 1] && pegs[i + 1] == pegs[i + 2] && pegs[i + 2] != " ")
		{
			return true;
		}
	}
	return false;
}

bool TicTacToe::check_diagonal_win()
{
	if (pegs[0] == pegs[4] && pegs[4] == pegs[8] && pegs[8] != " ")
	{
		return true;
	}
	else if (pegs[6] == pegs[4] && pegs[4] == pegs[2] && pegs[2] != " ")
	{
		return true;
	}
	else
	{
		return false;
	}
	
}

bool TicTacToe::check_board_full()
{
	for (auto& p : pegs)
	{
		if (p == " ")
		{
			return false;
		}
	}
	return true;
}

void TicTacToe::clear_board()
{
	for (auto& p : pegs)
	{
		p = " ";
	}
}
void TicTacToe::display_board() const
{
	for (std::size_t i = 0; i < 9; i += 3)
	{
		std::cout << pegs[i] << "|" << pegs[i + 1] << "|" << pegs[i + 2] << "\n";
	}
}
