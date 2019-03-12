#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H
#include <vector>
#include "tic_tac_toe.h"
#include <string>
//Write class interface here
class TicTacToeManager
{
public: 

	void save_game(const TicTacToe b);
	//void display_history()const;
	friend std::ostream & operator << (std::ostream & out, const TicTacToeManager & b);

private:
	std::vector<TicTacToe> games;
	int x_win;
	int o_win;
	int ties;
	void update_winner_count(std::string winner);
	
};

#endif // !TIC_TAC_TOE_MANAGER_H
