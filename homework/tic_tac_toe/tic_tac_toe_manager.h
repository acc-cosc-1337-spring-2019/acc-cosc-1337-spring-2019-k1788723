#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H
#include <vector>
#include "tic_tac_toe.h"
#include <string>
//Write class interface here
class TicTacToeManager
{
public: 

	void save_game(const TicTacToe games);
	//void display_history()const;
	friend std::ostream & operator << (std::ostream & out, const TicTacToeManager & g);

private:
	std::vector<TicTacToe> games;
	int x_win{ 0 };
	int o_win{ 0 };
	int ties{ 0 };
	void update_winner_count(std::string winner);
	
};

#endif // !TIC_TAC_TOE_MANAGER_H
