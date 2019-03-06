#include<string>
#include<vector>

class TicTacToe 
{
public:
	void start_game(std::string first_player);
	std::string get_player() const;

	bool game_over();
	void mark_board(int position);
	void display_board() const;
	void save_game(const TicTacToe b)


private:
	std::string next_player;
	std::vector<std::string> pegs{ 9, " "};

	void set_next_player();
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();
	void clear_board();
	bool check_board_full();
	std::string winner;
	void set_winner();
	std::string get_winner();

	
};